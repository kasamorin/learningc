#include<stdio.h>

int main(void)
{
    printf("while语句 while sentence\n");
    printf("while语句用于循环结构,满足条件时,不断执行循环体\n");
    printf("标准格式如:\n");
    printf(
        "while (expression)\n"
        "   statement\n"
    );
    printf("例如:\n");
    printf(
        "while (i < n)\n"
        "   i + 2;\n"
    );
    printf("上面示例中,只要i小于n,i就会不断增加2\n");
    printf(
        "while (expression)\n"
        "{\n"
        "   statement;\n"
        "   statement;\n"
        "}\n"
    );
    printf("一个示例:\n");
    int x;
    x = 0;
    while ( x < 10 )
    {
        printf("x is %i now\n" , x );
        x++;
    } // 循环10次
    printf("只要条件为真,while会产生无限循环。下面是一种常见的无限循环的写法\n");
    printf(
        "while ( n )\n"
        "{\n"
        "   // ...\n"
        "}\n"
    );
    printf("上面的示例虽然是无限循环,但是循环体内部可以用break语句跳出循环\n");
    return 0;
}