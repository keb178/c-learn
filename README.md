# C 语言学习仓库

## 学习路径

- **主教材**：《C 程序设计语言》（K&R，Kernighan & Ritchie 第二版）—— 逐章啃 + 做课后练习
- **辅助**：翁恺《C 语言》（浙江大学，中国大学 MOOC）—— 概念讲得细，和 K&R 对照着看
- **学习方式**：看书 → 自己写完整程序 → 踩坑（整数除法、scanf 顺序、漏占位符……）→ 把疑问问 AI 验证自己的理解
- **进度**（截至 2026-08-29）：第 1 章（导言）基本啃完（温度转换、power 函数、转义序列、字符常量都已过），正在进第 2 章（类型、运算符与表达式）

## 日常怎么用这个仓库

1. 写代码 → 按 **F8** 编译并运行（用的是扩展 "C/C++ Compile Run"，编码参数已配在 `.vscode/settings.json`；按 F5 走 tasks.json 也一样正常）
2. 改完一个阶段 → 打开源代码管理面板（`Ctrl+Shift+G`）→ 输入一句话说明 → `Ctrl+Enter` 提交并自动推送 GitHub
3. exe 等编译产物已被 `.gitignore` 排除，不用管

## 几年后重新使用（给未来的自己）

1. **装编译器**：装 [MSYS2](https://www.msys2.org/)，然后在 MSYS2 终端里执行
   `pacman -S mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-gdb`
   再把 `C:\msys64\ucrt64\bin` 加入系统 PATH。
   （用其他 gcc 发行版如 WinLibs、MinGW-w64 也可以，能编译 C 就行。）
2. **装编辑器**：VS Code + 扩展 "C/C++"（Microsoft 官方，ms-vscode.cpptools）+ 扩展 "C/C++ Compile Run"（danielpinto8zz6.c-cpp-compile-run，按 F8 编译运行用的就是它）。
3. **克隆本仓库，用 VS Code 打开整个文件夹**（不是单个文件），对代码按 **F8** 或 **F5**，自动带正确编码参数编译运行。

## 编码规则（重要！中文乱码就是这么来的）

- 所有 `.c` 源文件**一律以 UTF-8 编码保存**，只用 VS Code 编辑，别用记事本/Dev-C++ 打开保存。
- Windows 黑窗口默认用 GBK 显示，所以编译时必须带参数：
  ```
  gcc -finput-charset=UTF-8 -fexec-charset=GBK xxx.c -o xxx.exe
  ```
- 本仓库的 `.vscode/settings.json`（F8 用的扩展）和 `.vscode/tasks.json`（F5 用的任务）都已写好这个参数，**按 F8 或 F5 编译运行都会自动带上**，不会乱码。
- 如果手动在终端编译，必须自己带上上面的两个参数，否则中文输出会变成"鍗庢皬娓╁害"这样的乱码。

## 目录结构

```
.vscode/            编译、调试、git 配置（跟仓库走，别删）
output/             练习代码（learn-8-22.c 即 K&R 第 1 章温度转换等练习）
```
