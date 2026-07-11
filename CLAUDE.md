# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## 项目概况

这是一个 C 语言学习项目。用户正在通过编写小示例程序来学习 C 的语法特性。每个 `.c` 文件演示一个独立主题，对应的 `.md` 文件是该主题的参考手册。

## 编译与运行

- 编译器：GCC
- 标准：C23（`-std=c23`）
- 调试符号：`-g`

```bash
# 编译
gcc -std=c23 -g <file>.c -o <file>.out

# 运行
./<file>.out
```

编译产物 `*.out` 已在 `.gitignore` 中忽略。

## 文件角色

- `hello.c`：printf 占位符基础用法（宽度、精度、`*` 传参等）
- `operator.c`：算术运算符、赋值简写、自增自减（`++i`/`i++`）
- `relatiionalOperator.c`：关系运算符（`==` vs `=` 陷阱、连用陷阱）
- `logicalOperator.c`：逻辑运算符（`&&`/`||`/`!`、短路求值）
- `运算符.md`：运算符参考手册（排版指南见 `AI-md-guide.md`）
- `占位符.md`：printf 占位符参考手册

## 注意事项

- **不要主动修复 .c 源文件的编译错误**：用户正在学习，编译错误应由用户自己发现并修复。除非用户明确要求帮助修复，否则只指出问题所在的文件和大致原因。
- **.md 排版规范**：参考 `AI-md-guide.md`（`.gitignore` 屏蔽），禁止表格、用代码块高亮、保留原文内容。
- 源文件编码为 UTF-8，包含中文注释和字符串。