# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## 项目概况

这是一个 C 语言学习项目。用户正在通过编写小示例程序来学习 C 的语法特性。每个 `.c` 文件演示一个独立主题，对应的 `.md` 文件是该主题的参考手册。

## 项目结构

- `src/singleFiles/`：所有 .c 源文件（按主题分子目录），当前有 `hello.c`、`operator/`（运算符）、`flowControl/`（流程控制）
- `manual/`：.md 参考手册，每个主题的多个 .c 文件对应一份综合手册
- `CLAUDE.md`：本文件
- `AI-MD-GUIDE.md`：.md 手册编辑规范

## 编译与运行

- 编译器：GCC
- 标准：C23（`-std=gnu23`）
- 调试符号：`-g`

```bash
# 编译
gcc -std=gnu23 -g src/singleFiles/<主题>/<file>.c -o src/singleFiles/output/<file>.out

# 运行
./src/singleFiles/output/<file>.out
```

编译产物 `*.out` 已在 `.gitignore` 中忽略。

## 文件角色

`.c` 源文件与 `.md` 手册的对应关系（目录内所有 .c 对应同主题的一本 .md）：

- `hello.c` → `manual/占位符.md`：printf 占位符用法
- `operator/` → `manual/运算符.md`：算术、赋值简写、自增自减、关系、逻辑、位运算、逗号、优先级
- `flowControl/` → `manual/流程控制.md`：if/else 条件判断与悬垂匹配、switch 穿透、三元运算符 `?:`、while 循环

## .md 参考手册编辑规范

`.md` 文件排版须遵循以下规则（详见 `AI-MD-GUIDE.md`）：

- **禁止 GFM 表格** — 用 `-` 无序列表代替
- **代码示例用围栏代码块** ` ```c ``` `
- **每个板块末尾加 `> ⚠️ 注意事项`** 引用块，总结易错点
- **注意事项内容必须来源于对应 .c 源文件**的实际演示和注释，不凭空编造
- 保留原文所有内容，只做排版增强，不删除不缩减
- 标题层级：`#` 手册名 → `##` 大板块 → `###` 子板块

## 注意事项

- **不要主动修复 .c 源文件的编译错误**：用户正在学习，编译错误应由用户自己发现并修复。除非用户明确要求帮助修复，否则只指出问题所在的文件和大致原因。
- 源文件编码为 UTF-8，包含中文注释和字符串。
