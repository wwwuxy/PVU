#!/bin/bash

# 简化版更新脚本 - 仅更新非ResNet神经网络模型的测试文件
# 基于ResNet模型的测试文件作为模板

# 定义要处理的神经网络模型
MODELS=("efficientnet" "shufflenetv2" "convnext" "squeezenet" "mobilenet" "lenet" "alexnet" "vgg" "regnet")

# 定义要处理的运算类型
OPERATIONS=("add" "sub" "mul" "div" "dot")

# 定义颜色输出
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
RED='\033[0;31m'
NC='\033[0m' # 无颜色

echo -e "${GREEN}开始更新其他神经网络模型的运算测试文件...${NC}"

# 计数器
PROCESSED=0
ERRORS=0

for model in "${MODELS[@]}"; do
  echo -e "${YELLOW}处理模型: ${model}${NC}"
  
  for op in "${OPERATIONS[@]}"; do
    # 源文件(ResNet模板)和目标文件路径
    SRC_FILE="/home/wuxy/PVU/csrc/main_resnet_${op}_p32.cpp"
    DST_FILE="/home/wuxy/PVU/csrc/main_${model}_${op}_p32.cpp"
    
    if [ ! -f "$SRC_FILE" ]; then
      echo -e "${RED}错误: 源文件 $SRC_FILE 不存在!${NC}"
      ((ERRORS++))
      continue
    fi
    
    echo "更新 $DST_FILE ..."
    
    # 复制文件
    cp "$SRC_FILE" "$DST_FILE.new"
    
    # 1. 修改CONFIG宏定义
    CONFIG_NAME=$(echo "${model}_${op}_p32" | tr '[:lower:]' '[:upper:]')
    sed -i "s/CONFIG_RESNET_[A-Z_0-9]\+/CONFIG_${CONFIG_NAME}/g" "$DST_FILE.new"
    
    # 2. 修改模型文件路径 - 处理不同模型路径的首字母大写
    MODEL_PATH="$model"
    case "$model" in
      "resnet") MODEL_PATH="ResNet50" ;;
      "efficientnet") MODEL_PATH="EfficientNet" ;;
      "shufflenetv2") MODEL_PATH="ShuffleNetv2" ;;
      "convnext") MODEL_PATH="ConvNext" ;;
      "squeezenet") MODEL_PATH="SqueezeNet" ;;
      "mobilenet") MODEL_PATH="MobileNet" ;;
      "lenet") MODEL_PATH="LeNet5" ;;
      "vgg") MODEL_PATH="VGG" ;;
      "alexnet") MODEL_PATH="AlexNet" ;;
      "regnet") MODEL_PATH="RegNet" ;;
    esac
    
    sed -i "s|\"./test_src/ResNet50/|\"./test_src/${MODEL_PATH}/|g" "$DST_FILE.new"
    
    # 3. 对dot运算特殊处理
    if [ "$op" = "dot" ]; then
      # 在开头打印中添加正确的网络名称
      DISPLAY_NET_NAME=$(echo "$model" | sed 's/.*/\u&/')  # 首字母大写
      sed -i "s/开始点积性能测试/开始${DISPLAY_NET_NAME}点积性能测试/g" "$DST_FILE.new"
    fi
    
    # 移动新文件替换旧文件
    if [ -f "$DST_FILE.new" ]; then
      mv "$DST_FILE.new" "$DST_FILE"
      echo -e "${GREEN}✓ 成功更新${NC}"
      ((PROCESSED++))
    else
      echo -e "${RED}✗ 更新失败${NC}"
      ((ERRORS++))
    fi
  done
done

echo -e "${GREEN}更新完成!${NC}"
echo -e "成功处理: ${GREEN}$PROCESSED${NC} 文件"
if [ $ERRORS -gt 0 ]; then
  echo -e "处理失败: ${RED}$ERRORS${NC} 文件"
fi

exit 0 