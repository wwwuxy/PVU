#!/bin/bash
# 批量更新所有测试文件，使它们与main_resnet_add_p32.cpp保持一致的逻辑模式
# 作者: wuxy

# 检查jq命令是否存在
if ! command -v jq &> /dev/null; then
    echo "错误: 此脚本需要jq来处理JSON数据，请安装jq后再运行"
    echo "可使用 'apt-get install jq' 或 'yum install jq' 安装"
    exit 1
fi

# 定义操作类型映射
declare -A OP_MAP
OP_MAP["add"]=1
OP_MAP["sub"]=2
OP_MAP["mul"]=3
OP_MAP["div"]=4
OP_MAP["dot"]=5

# 定义网络模型数据文件路径映射
declare -A NET_PATH_MAP
NET_PATH_MAP["resnet"]="ResNet50"
NET_PATH_MAP["efficientnet"]="EfficientNet"
NET_PATH_MAP["shufflenetv2"]="ShuffleNetv2"
NET_PATH_MAP["convnext"]="ConvNext"
NET_PATH_MAP["squeezenet"]="SqueezeNet"
NET_PATH_MAP["mobilenet"]="MobileNet"
NET_PATH_MAP["lenet"]="LeNet5"
NET_PATH_MAP["vgg"]="VGG"
NET_PATH_MAP["alexnet"]="AlexNet"
NET_PATH_MAP["regnet"]="RegNet" # RegNet和ResNet使用相同的预处理数据

# 预处理函数 - 从文件名提取网络和操作类型
extract_info() {
    local filename="$1"
    local network=$(echo "$filename" | grep -oP "main_\K[a-z]+" | tr '[:upper:]' '[:lower:]')
    local op=$(echo "$filename" | grep -oP "\_\K[a-z]+(?=\_p32)" | tr '[:upper:]' '[:lower:]')
    echo "{\"network\":\"$network\", \"op\":\"$op\"}"
}

# 函数：更新标准算术操作文件（add/sub/mul）
update_arithmetic_file() {
    local file="$1"
    local info=$(extract_info "$file")
    local network=$(echo $info | jq -r '.network')
    local op=$(echo $info | jq -r '.op')
    local op_code=${OP_MAP[$op]}
    local net_path=${NET_PATH_MAP[$network]}
    
    # 检查网络和操作是否有效
    if [ -z "$net_path" ] || [ -z "$op_code" ]; then
        echo "警告: 无法识别网络($network)或操作($op)，跳过文件 $file"
        return 1
    fi
    
    # 确保操作是标准运算
    if [[ "$op" != "add" && "$op" != "sub" && "$op" != "mul" ]]; then
        echo "跳过非标准算术运算文件: $file"
        return 1
    fi
    
    echo "更新文件: $file (网络=$network, 操作=$op, 操作码=$op_code, 数据路径=$net_path)"
    
    # 构建网络和操作的配置名（大写）
    local config_name=$(echo ${network}_${op}_p32 | tr '[:lower:]' '[:upper:]')
    
    # 使用sed替换关键部分
    # 1. 更新配置名
    sed -i "s/CONFIG_[A-Z0-9_]\+/CONFIG_$config_name/g" "$file"
    
    # 2. 更新操作码
    sed -i "s/#define OP[ ]\+[0-9]\+/#define OP   $op_code/g" "$file"
    
    # 3. 更新数据文件路径
    sed -i "s|\"./test_src/[^/]\+/posit_activations.bin\"|\"./test_src/$net_path/posit_activations.bin\"|g" "$file"
    sed -i "s|\"./test_src/[^/]\+/posit_weights.bin\"|\"./test_src/$net_path/posit_weights.bin\"|g" "$file"
    sed -i "s|\"./test_src/[^/]\+/${op}_results.bin\"|\"./test_src/$net_path/${op}_results.bin\"|g" "$file"
    
    # 4. 更新硬件接口说明中的操作说明
    local op_desc=""
    case "$op" in
        "add") op_desc="加法" ;;
        "sub") op_desc="减法" ;;
        "mul") op_desc="乘法" ;;
        *) op_desc="未知操作" ;;
    esac
    
    # 5. 添加或更新硬件接口说明
    if grep -q "硬件接口说明" "$file"; then
        sed -i "s|// io_op: 操作类型 \[2:0\] - [0-9]表示.*$|// io_op: 操作类型 \[2:0\] - $op_code表示$op_desc|g" "$file"
    else
        # 如果没有硬件接口说明，添加它
        sed -i "/const int MAX_VECTOR_SIZE.*$/a \\
//--------------------------------------------\\
\\
//---------------- 硬件接口说明 ---------------\\
// 输入接口:\\
// io_posit_i1_0~3, io_posit_i2_0~3: posit格式输入 [31:0]\\
// io_op: 操作类型 [2:0] - $op_code表示$op_desc\\
// \\
// 输出接口:\\
// io_posit_o_0~3: posit格式输出 [31:0]\\
// io_posit_dot_o: posit点积结果 [31:0]" "$file"
    fi
    
    # 6. 更新posit_equal函数
    if grep -q "posit_equal" "$file"; then
        # 尝试确定posit_equal函数的位置，并更新为更复杂的版本
        sed -i '/bool posit_equal(uint32_t a, uint32_t b)/,/}/c\
bool posit_equal(uint32_t a, uint32_t b) {\n\
    // 如果完全相等，直接返回true\n\
    if (a == b) return true;\n\
    \n\
    // 检查特殊值NaR (Not a Real) - Posit中的NaN表示\n\
    bool a_is_nar = (a == 0x80000000);\n\
    bool b_is_nar = (b == 0x80000000);\n\
    \n\
    // 如果两者都是NaR，视为相等\n\
    if (a_is_nar && b_is_nar) return true;\n\
    \n\
    // 如果只有一个是NaR，视为不等\n\
    if (a_is_nar || b_is_nar) return false;\n\
    \n\
    // 检查零值 (posit零值是0x00000000)\n\
    bool a_is_zero = (a == 0x00000000);\n\
    bool b_is_zero = (b == 0x00000000);\n\
    \n\
    // 如果一个是零而另一个不是，视为不等\n\
    if (a_is_zero != b_is_zero) return false;\n\
    \n\
    // 允许1ULP误差\n\
    int32_t ia = static_cast<int32_t>(a);\n\
    int32_t ib = static_cast<int32_t>(b);\n\
    return std::abs(ia - ib) <= 1;\n\
}' "$file"
    fi
    
    # 7. 添加向量大小检查
    if ! grep -q "检查向量大小是否在硬件支持范围内" "$file"; then
        sed -i '/std::vector<double> run_performance_test/,/VPvuTop\* top = new VPvuTop;/c\
// 添加性能测试函数\n\
std::vector<double> run_performance_test(int vector_size, int sample_count, bool enable_waveform = false) {\n\
    // 检查向量大小是否在硬件支持范围内\n\
    if (vector_size > MAX_VECTOR_SIZE || vector_size < 1) {\n\
        std::cerr << "错误：向量大小 " << vector_size << " 超出支持范围 [1-" << MAX_VECTOR_SIZE << "]" << std::endl;\n\
        exit(EXIT_FAILURE);\n\
    }\n\
    \n\
    VPvuTop* top = new VPvuTop;' "$file"
    fi
    
    # 8. 简化IO设置代码，移除不必要的配置
    sed -i '/\/\/设置信号量/,/top->io_vector_size/c\
        //设置信号量\n\
        top->io_op = OP; // '"$op_code"'表示'"$op_desc"'操作' "$file"
    
    # 9. 修改错误检测逻辑，使用error_in_sample变量
    if ! grep -q "error_in_sample" "$file"; then
        sed -i '/\/\/ 结果比较/,/errors++;/c\
        // 结果比较\n\
        std::vector<uint32_t> hw_result(vector_size, 0);\n\
        if (vector_size >= 1) hw_result[0] = top->io_posit_o_0;\n\
        if (vector_size >= 2) hw_result[1] = top->io_posit_o_1;\n\
        if (vector_size >= 3) hw_result[2] = top->io_posit_o_2;\n\
        if (vector_size >= 4) hw_result[3] = top->io_posit_o_3;\n\
        \n\
        bool error_in_sample = false;\n\
        for(int j = 0; j < vector_size; j++){\n\
            if (!posit_equal(hw_result[j], golden[j])) {\n\
                error_in_sample = true;\n\
                break;\n\
            }\n\
        }\n\
        \n\
        if (error_in_sample) {\n\
            std::cerr << "样本 " << i << " 不匹配\\n"\n\
                      << "  硬件: 0x" << std::hex;\n\
            for(int k = 0; k < vector_size; k++) {\n\
                std::cerr << hw_result[k] << (k < vector_size-1 ? ", " : "");\n\
            }\n\
            std::cerr << "\\n  预期: 0x" << std::hex;\n\
            for(int k = 0; k < vector_size; k++) {\n\
                std::cerr << golden[k] << (k < vector_size-1 ? ", " : "");\n\
            }\n\
            std::cerr << "\\n  激活数据: 0x" << std::hex;\n\
            for(int k = 0; k < vector_size; k++) {\n\
                std::cerr << act_bits[k] << (k < vector_size-1 ? ", " : "");\n\
            }\n\
            std::cerr << "\\n  权重数据: 0x" << std::hex;\n\
            for(int k = 0; k < vector_size; k++) {\n\
                std::cerr << weight_bits[k] << (k < vector_size-1 ? ", " : "");\n\
            }\n\
            std::cerr << std::dec << std::endl;\n\
            errors++;\n\
        }' "$file"
    fi
    
    # 10. 调整元素吞吐量的计算位置
    sed -i '/avg_hw_compute_time = /,/double elements_throughput/c\
    avg_hw_compute_time = total_hw_compute_time / sample_count;\n\
    \n\
    // 资源清理\n\
    if (tfp) {\n\
        tfp->close();\n\
        delete tfp;\n\
    }\n\
    top->final();\n\
    delete top;\n\
    \n\
    // 计算元素级吞吐量（考虑向量大小）\n\
    double elements_throughput' "$file"
    
    echo "文件 $file 更新完成"
}

# 函数：更新除法操作文件（div）
update_div_file() {
    local file="$1"
    local info=$(extract_info "$file")
    local network=$(echo $info | jq -r '.network')
    local op=$(echo $info | jq -r '.op')
    local op_code=${OP_MAP[$op]}
    local net_path=${NET_PATH_MAP[$network]}
    
    # 检查网络和操作是否有效
    if [ -z "$net_path" ] || [ -z "$op_code" ]; then
        echo "警告: 无法识别网络($network)或操作($op)，跳过文件 $file"
        return 1
    fi
    
    # 确保操作是除法
    if [[ "$op" != "div" ]]; then
        echo "跳过非除法运算文件: $file"
        return 1
    fi
    
    echo "更新除法文件: $file (网络=$network, 操作=$op, 操作码=$op_code, 数据路径=$net_path)"
    
    # 构建网络和操作的配置名（大写）
    local config_name=$(echo ${network}_${op}_p32 | tr '[:lower:]' '[:upper:]')
    
    # 使用sed替换关键部分
    # 1-3. 与标准算术操作相同的更新
    sed -i "s/CONFIG_[A-Z0-9_]\+/CONFIG_$config_name/g" "$file"
    sed -i "s/#define OP[ ]\+[0-9]\+/#define OP   $op_code/g" "$file"
    sed -i "s|\"./test_src/[^/]\+/posit_activations.bin\"|\"./test_src/$net_path/posit_activations.bin\"|g" "$file"
    sed -i "s|\"./test_src/[^/]\+/posit_weights.bin\"|\"./test_src/$net_path/posit_weights.bin\"|g" "$file"
    sed -i "s|\"./test_src/[^/]\+/${op}_results.bin\"|\"./test_src/$net_path/${op}_results.bin\"|g" "$file"
    
    # 4-5. 添加或更新硬件接口说明
    if grep -q "硬件接口说明" "$file"; then
        sed -i "s|// io_op: 操作类型 \[2:0\] - [0-9]表示.*$|// io_op: 操作类型 \[2:0\] - $op_code表示除法|g" "$file"
    else
        # 如果没有硬件接口说明，添加它
        sed -i "/const int MAX_VECTOR_SIZE.*$/a \\
//--------------------------------------------\\
\\
//---------------- 硬件接口说明 ---------------\\
// 输入接口:\\
// io_posit_i1_0~3, io_posit_i2_0~3: posit格式输入 [31:0]\\
// io_op: 操作类型 [2:0] - $op_code表示除法\\
// \\
// 输出接口:\\
// io_posit_o_0~3: posit格式输出 [31:0]\\
// io_posit_dot_o: posit点积结果 [31:0]" "$file"
    fi
    
    # 6. 更新posit_equal函数
    if grep -q "posit_equal" "$file"; then
        # 尝试确定posit_equal函数的位置，并更新为更复杂的版本
        sed -i '/bool posit_equal(uint32_t a, uint32_t b)/,/}/c\
bool posit_equal(uint32_t a, uint32_t b) {\n\
    // 如果完全相等，直接返回true\n\
    if (a == b) return true;\n\
    \n\
    // 检查特殊值NaR (Not a Real) - Posit中的NaN表示\n\
    bool a_is_nar = (a == 0x80000000);\n\
    bool b_is_nar = (b == 0x80000000);\n\
    \n\
    // 如果两者都是NaR，视为相等\n\
    if (a_is_nar && b_is_nar) return true;\n\
    \n\
    // 如果只有一个是NaR，视为不等\n\
    if (a_is_nar || b_is_nar) return false;\n\
    \n\
    // 检查零值 (posit零值是0x00000000)\n\
    bool a_is_zero = (a == 0x00000000);\n\
    bool b_is_zero = (b == 0x00000000);\n\
    \n\
    // 如果一个是零而另一个不是，视为不等\n\
    if (a_is_zero != b_is_zero) return false;\n\
    \n\
    // 允许1ULP误差\n\
    int32_t ia = static_cast<int32_t>(a);\n\
    int32_t ib = static_cast<int32_t>(b);\n\
    return std::abs(ia - ib) <= 1;\n\
}' "$file"
    fi
    
    # 7. 添加向量大小检查
    if ! grep -q "检查向量大小是否在硬件支持范围内" "$file"; then
        sed -i '/std::vector<double> run_performance_test/,/VPvuTop\* top = new VPvuTop;/c\
// 添加性能测试函数\n\
std::vector<double> run_performance_test(int vector_size, int sample_count, bool enable_waveform = false) {\n\
    // 检查向量大小是否在硬件支持范围内\n\
    if (vector_size > MAX_VECTOR_SIZE || vector_size < 1) {\n\
        std::cerr << "错误：向量大小 " << vector_size << " 超出支持范围 [1-" << MAX_VECTOR_SIZE << "]" << std::endl;\n\
        exit(EXIT_FAILURE);\n\
    }\n\
    \n\
    VPvuTop* top = new VPvuTop;' "$file"
    fi
    
    # 8. 简化IO设置代码，移除不必要的配置
    sed -i '/\/\/设置信号量/,/top->io_vector_size/c\
        //设置信号量\n\
        top->io_op = OP; // 4表示除法操作' "$file"
    
    # 9. 添加「特定于除法」的注释
    sed -i 's/初始化错误统计变量/初始化错误统计变量（特定于除法运算）/g' "$file"
    sed -i 's/\/\/ 逐元素比较并统计错误/\/\/ 逐元素比较并统计错误（除法特有的误差分析）/g' "$file"
    sed -i 's/\/\/ 计算平均误差和非严重错误比率/\/\/ 计算平均误差和非严重错误比率（特定于除法的指标）/g' "$file"
    
    # 10. 移除可选的错误输出注释和调试代码
    sed -i '/\/\/ 可选：如果需要查看这些/d' "$file"
    sed -i '/\/\*/{:a;N;/\*\//d;ba}' "$file"
    
    # 11. 调整计算吞吐量代码段位置
    sed -i '/avg_hw_compute_time = /,/double elements_throughput/c\
    avg_hw_compute_time = total_hw_compute_time / sample_count;\n\
    \n\
    // 资源清理\n\
    if (tfp) {\n\
        tfp->close();\n\
        delete tfp;\n\
    }\n\
    top->final();\n\
    delete top;\n\
    \n\
    // 计算元素级吞吐量（考虑向量大小）\n\
    double elements_throughput' "$file"
    
    echo "除法文件 $file 更新完成"
}

# 函数：更新点积操作文件（dot）
update_dot_file() {
    local file="$1"
    local info=$(extract_info "$file")
    local network=$(echo $info | jq -r '.network')
    local op=$(echo $info | jq -r '.op')
    local op_code=${OP_MAP[$op]}
    local net_path=${NET_PATH_MAP[$network]}
    
    # 检查网络和操作是否有效
    if [ -z "$net_path" ] || [ -z "$op_code" ]; then
        echo "警告: 无法识别网络($network)或操作($op)，跳过文件 $file"
        return 1
    fi
    
    # 确保操作是点积
    if [[ "$op" != "dot" ]]; then
        echo "跳过非点积运算文件: $file"
        return 1
    fi
    
    echo "更新点积文件: $file (网络=$network, 操作=$op, 操作码=$op_code, 数据路径=$net_path)"
    
    # 将文件复制并替换为ResNet的点积模板中的内容
    cp "main_resnet_dot_p32.cpp" "$file.new"
    
    # 更新配置名和数据路径
    local config_name=$(echo ${network}_${op}_p32 | tr '[:lower:]' '[:upper:]')
    sed -i "s/CONFIG_RESNET_DOT_P32/CONFIG_$config_name/g" "$file.new"
    sed -i "s|\"./test_src/ResNet50/posit_activations.bin\"|\"./test_src/$net_path/posit_activations.bin\"|g" "$file.new"
    sed -i "s|\"./test_src/ResNet50/posit_weights.bin\"|\"./test_src/$net_path/posit_weights.bin\"|g" "$file.new"
    sed -i "s|\"./test_src/ResNet50/dot_product_results.bin\"|\"./test_src/$net_path/dot_product_results.bin\"|g" "$file.new"
    
    # 开头打印显示正确的网络名称
    local displayNetName=$(echo "$network" | sed 's/.*/\u&/')  # 首字母大写
    sed -i "s/std::cout << \"开始点积性能测试/std::cout << \"开始${displayNetName}点积性能测试/g" "$file.new"
    
    # 替换原始文件
    mv "$file.new" "$file"
    
    echo "点积文件 $file 更新完成"
}

# 主处理函数
update_file() {
    local file="$1"
    local info=$(extract_info "$file")
    local op=$(echo $info | jq -r '.op')
    
    case "$op" in
        "add"|"sub"|"mul")
            update_arithmetic_file "$file"
            ;;
        "div")
            update_div_file "$file"
            ;;
        "dot")
            update_dot_file "$file"
            ;;
        *)
            echo "未知操作类型: $op，跳过文件 $file"
            ;;
    esac
}

# 主程序入口
echo "开始批量更新所有测试文件..."

# 扫描目录下所有匹配的cpp文件
for file in main_*_p32.cpp; do
    # 跳过已经更新过的文件 - ResNet加法文件是基础模板
    if [[ "$file" == "main_resnet_add_p32.cpp" ]]; then
        echo "跳过基础模板文件: $file"
        continue
    fi
    
    update_file "$file"
done

echo "所有文件更新完毕!" 