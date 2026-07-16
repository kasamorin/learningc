#include<stdio.h>

int main(void)
{
    printf("break语句 break sentence\n");
    printf("break语句有两种用法。一种是与switch语句配套使用"
        ",用来中断某个分支的执行,这种用法前面已经介绍过了."
        "另一种用法是在循环体内部跳出循环,不再进行后面的循环了\n");
    printf(
        "for (int i = 0; i < 3; i++)\n"
        "{\n"
        "   for (int j = 0; j < 3; j++)\n"
        "   {\n"
        "       printf(\"j is %%d now\\n\");\n"
        "       break;\n"
        "   }\n"
        "}\n"
    );
    printf("以上循环中,j执行一次然后跳出执行i,然后从头再执行j"
        ",j++永远不会被执行,j也不会循环,而是随着i循环时顺便被执行\n");
    printf("当去掉break,j会正常执行直到j>=3,然后i++之后再执行j直到i>=3\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++ )
        {
            printf("j is %d now \n" , j);
            break;
        }
    }
    printf("下面示例中,一旦读到换行符（\\n）,break命令就跳出整个while循环,不再继续读取了\n");
    printf("请输入文本: ");
    int ch;
    while ( (ch = getchar()) != EOF )
    {
        if (ch == '\n') break;
        putchar(ch);
        printf("\n");
    }
    printf("上面循环中,getchar接受单个字符(多个字符会存在缓存区里输入给getchar)"
        ",然后判断是否为EOF,是就终止,不是就继续判断是否为回车,是就跳出,不是就打印字符"
        ",注意,由于getchar只接受了一个字符,剩下的还在缓存里,因此只会打印一个字符"
        ",然后回车,之后继续循环,直到检测到回车跳出\n");
    printf("如何触发EOF,答案是在没有输入时按下Ctrl+D,如果有输入,Ctrl+D会变成继续程序"
        "(等效回车,但不会输入回车,因此不会触发有回车跳出的判断)\n");
    printf("注意:break命令只能跳出循环体和switch结构,不能跳出if结构\n");
    int n = 3;
    if (n > 1)
    {
        if (n > 2)
        {
            // break; // if 中用break编译会报错
            printf("Hello World\n");
        }
    }
    return 0;
}