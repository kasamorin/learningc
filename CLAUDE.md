# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## 项目概况

这是一个 C 语言学习项目。用户正在通过编写小示例程序来学习 C 的语法特性。每个 `.c` 文件演示一个独立主题，对应的 `.md` 文件是该主题的参考手册。

## 项目结构

- `src/singleFiles/`：所有 `.c` 源文件。`hello.c` 在根下，其余按主题分子目录（`operator/`、`flowControl/`、`types/` 等）
- `src/singleFiles/output/`：编译产物 `*.out`，已在 `.gitignore` 中忽略
- `manual/`：`.md` 参考手册，每个主题目录的所有 `.c` 对应一份综合手册
- `CLAUDE.md`：本文件
- `AI-MD-GUIDE.md`：`.md` 手册编辑规范
- `run`：编译并运行 `.c` 文件的便捷脚本
- `comma.py`：将 `.c` 源文件中的中文逗号 `，` 替换为英文逗号 `,` 的工具脚本
- `COPYING`：GPLv3 许可证

## 编译与运行

- 编译器：GCC
- 标准：C23（`-std=gnu23`）
- 调试符号：`-g`

```bash
# 手动编译
gcc -std=gnu23 -g src/singleFiles/<主题>/<file>.c -o src/singleFiles/output/<file>.out

# 手动运行
./src/singleFiles/output/<file>.out
```

### run 脚本

项目根目录的 `run` 脚本可在任意子目录下快速编译并运行 `.c` 文件：

```bash
# 需先在 .zshrc 中激活（安装后会自动添加 chpwd hook）
./run <文件名>     # .c 后缀可省略，在当前工作目录及子目录中检索
```

用法：`run for.c` 或 `run for`。若编译失败，脚本会报错退出，不运行。

编译产物统一输出到 `src/singleFiles/output/`。

## 文件角色

`.c` 源文件与 `.md` 手册的对应关系（目录内所有 `.c` 对应同主题的一本 `.md`）：

- `hello.c` → `manual/占位符.md`：printf 占位符用法
- `operator/` → `manual/运算符.md`：算术、赋值简写、自增自减、关系、逻辑、位运算、逗号、优先级
- `flowControl/` → `manual/流程控制.md`：if/else 条件判断与悬垂匹配、switch 穿透、三元运算符 `?:`、while 循环、for 循环、break 语句、continue 语句、goto 语句
- `types/` → `manual/数据类型.md`：数据类型概述、字符类型（char）与整数互换、ASCII、转义字符

## .md 参考手册编辑规范

`.md` 文件排版须遵循以下规则（详见 `AI-MD-GUIDE.md`）：

- **禁止 GFM 表格** — 用 `-` 无序列表代替
- **代码示例用围栏代码块** ` ```c ``` `
- **每个板块末尾加 `> ⚠️ 注意事项`** 引用块，总结易错点
- **注意事项内容必须来源于对应 `.c` 源文件**的实际演示和注释，不凭空编造
- 保留原文所有内容，只做排版增强，不删除不缩减
- 标题层级：`#` 手册名 → `##` 大板块 → `###` 子板块

## 注意事项

- **不要主动修复 `.c` 源文件的编译错误**：用户正在学习，编译错误应由用户自己发现并修复。除非用户明确要求帮助修复，否则只指出问题所在的文件和大致原因。
- 源文件编码为 UTF-8，包含中文注释和字符串。