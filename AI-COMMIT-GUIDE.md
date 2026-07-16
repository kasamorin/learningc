# AI Commit 指南

本文件供 AI（Claude Code 等）在为本项目执行 `git commit` 时参考。

## 核心规则

1. **主题行以「学习了xxx」开头**，除非本次没有 `.c` 文件变更或新建
2. **禁止直接提交**：写好 commit message 后交给用户审批，用户同意后才能执行 `git commit`
3. **Body 作者署名**：
   - `.c` 源文件本体修改 → `by kasamorin`（除非上下文明确提到是 AI 写的）
   - AI 生成内容（`.md` 手册、CLAUDE.md 等）→ 上下文知道哪个 AI 就写 `by <AI名>`，不知道就提醒用户补充创作人
4. **Body 格式**：用 `- <操作> <文件路径>：<具体做了什么> by <作者>` 逐条列出