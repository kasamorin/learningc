# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## 项目概况

这是一个 C 语言学习项目。用户正在通过编写小示例程序来学习 C 的语法特性。每个 `.c` 文件演示一个独立主题，对应的 `.md` 文件是该主题的参考手册。

## 项目结构

```
.
├── singleFiles/src/        # 所有 .c 源文件
│   ├── hello.c             # printf 占位符用法
│   ├── operator.c          # 算术运算符、赋值简写、自增自减
│   ├── relationalOperator.c  # 关系运算符
│   ├── logicalOperator.c   # 逻辑运算符（短路求值）
│   ├── bitwiseOperator.c   # 位运算符
│   ├── commaOperator.c     # 逗号运算符
│   └── orderOfOperations.c # 运算优先级
├── manual/                 # 所有 .md 参考手册
│   ├── 占位符.md           # hello.c 的参考手册
│   └── 运算符.md           # 其余六个 .c 的综合运算符手册
├── singleFiles/output/     # 编译产物（gitignore）
├── CLAUDE.md
├── AI-MD-GUIDE.md          # .md 手册编辑规范（被 .gitignore 屏蔽）
├── COPYING
└── README.md
```

## 编译与运行

- 编译器：GCC
- 标准：C23（`-std=gnu23`）
- 调试符号：`-g`

```bash
# 编译
gcc -std=gnu23 -g singleFiles/src/<file>.c -o singleFiles/output/<file>.out

# 运行
./singleFiles/output/<file>.out
```

编译产物 `*.out` 已在 `.gitignore` 中忽略。

## 文件角色

`.c` 源文件与 `.md` 手册的对应关系：

- `hello.c` → `占位符.md`：printf 占位符用法（宽度、精度、`*` 传参、`%.*s` 等）
- `operator.c` → `运算符.md` 一～三：算术运算符、赋值简写、自增自减（`++i`/`i++`）
- `relatiionalOperator.c` → `运算符.md` 四：关系运算符（`==` vs `=` 陷阱、连用陷阱）
- `logicalOperator.c` → `运算符.md` 五：逻辑运算符（`&&`/`||`/`!`、短路求值）
- `bitwiseOperator.c` → `运算符.md` 六：位运算符（`~` `&` `|` `^` `<<` `>>` 及简写形式）
- `commaOperator.c` → `运算符.md` 七：逗号运算符（多表达式同行、返回最后一个表达式的值、优先级最低）
- `orderOfOperations.c` → `运算符.md` 八：运算优先级（优先级顺序、结合性、圆括号）

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
- `AI-md-guide.md` 被 `.gitignore` 屏蔽，Claude 实例可能读不到该文件。如果读不到，按上面「.md 参考手册编辑规范」执行即可，核心规则已内联在此。
