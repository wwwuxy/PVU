#!/bin/bash
echo "更新文件中..."
cp csrc/main_resnet_add_p32.cpp csrc/main_efficientnet_add_p32.cpp
sed -i "s/CONFIG_RESNET_ADD_P32/CONFIG_EFFICIENTNET_ADD_P32/g" csrc/main_efficientnet_add_p32.cpp
sed -i "s|\"./test_src/ResNet50/|\"./test_src/EfficientNet/|g" csrc/main_efficientnet_add_p32.cpp
echo "更新完成"
