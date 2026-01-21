数据实验：位运算实现整数运算






一个计算机系统编程作业，要求使用 仅位运算符 实现整数算术操作，帮助学生理解计算机在硬件层面如何执行基本数学运算。

概述

本项目实现了基本的整数运算（add、subtract、multiply、divide、modulo），仅使用位运算符。目标是展示对以下内容的理解：

二进制补码表示

位运算操作

加法中的进位传播

移位加法乘法（shift-and-add multiplication）

长除法算法（long division）

硬件层面的整数运算原理

前置条件
系统要求

C++ 编译器：GCC 13+ 或 Clang 16+，支持 C++23

构建系统：CMake 3.30+

操作系统：Linux、macOS 或 Windows（推荐 WSL2）

所需工具
# Ubuntu/Debian
sudo apt update
sudo apt install build-essential cmake git clang-format clang-tidy

# macOS（使用 Homebrew）
brew install cmake llvm clang-format

# Windows（使用 Chocolatey）
choco install cmake git llvm

开发环境

IDE：VS Code、CLion 或任何 C++ IDE

版本控制：Git

测试框架：GoogleTest（通过 CMake 自动下载）

构建项目
克隆仓库并进入
git clone https://github.com/bmyjacks/CSC3060_data_lab.git
cd data_lab

使用 CMake 配置
# 发布版（推荐用于性能测试）
cmake -DCMAKE_BUILD_TYPE=Release -B build

# 调试版（用于开发/调试）
cmake -DCMAKE_BUILD_TYPE=Debug -B build

构建
cmake --build build

运行测试
运行所有测试
ctest --test-dir build -V

手动执行测试
# 直接运行测试可执行文件
build/test_data_lab

# 使用 GoogleTest 过滤器
build/test_data_lab --gtest_filter="AddTest.*"

测试覆盖

测试套件包括：

总计 60 个测试，分布在 5 个函数套件中

基本功能测试

边界情况（INT32_MAX、INT32_MIN、溢出）

位运算操作场景

作业规则

请参阅作业 PDF 文件。

课程：CSC3060：计算机系统
作业：数据实验（Data Lab）
截止日期：2026 年 1 月 30 日 23:59 UTC+8
总分：100