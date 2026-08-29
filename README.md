# C 语言学习仓库

学习课程：翁恺《C语言》（浙江大学，中国大学 MOOC）

## 几年后重新使用（给未来的自己）

1. **装编译器**：装 [MSYS2](https://www.msys2.org/)，然后在 MSYS2 终端里执行
   `pacman -S mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-gdb`
   再把 `C:\msys64\ucrt64\bin` 加入系统 PATH。
   （用其他 gcc 发行版如 WinLibs、MinGW-w64 也可以，能编译 C 就行。）
2. **装编辑器**：VS Code + 扩展 "C/C++"（Microsoft 官方，ms-vscode.cpptools）。
3. **克隆本仓库，用 VS Code 打开整个文件夹**（不是单个文件），对代码按 **F5**，会自动编译并弹出黑窗口运行。

## 编码规则（重要！中文乱码就是这么来的）

- 所有 `.c` 源文件**一律以 UTF-8 编码保存**，只用 VS Code 编辑，别用记事本/Dev-C++ 打开保存。
- Windows 黑窗口默认用 GBK 显示，所以编译时必须带参数：
  ```
  gcc -finput-charset=UTF-8 -fexec-charset=GBK xxx.c -o xxx.exe
  ```
- 本仓库的 `.vscode/tasks.json` 已经写好这个参数，**按 F5 编译运行会自动带上**，不会乱码。
- 如果手动在终端编译，必须自己带上上面的两个参数，否则中文输出会变成"鍗庢皬娓╁害"这样的乱码。

## 目录结构

```
.vscode/            编译和调试配置（跟仓库走，别删）
output/             练习代码（learn-8-22.c 对应课程 8/22 的练习）
```
