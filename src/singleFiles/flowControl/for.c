#include<stdio.h>

int main(void)
{
    printf("for语句 for sentence\n");
    printf("for语句是最常用的循环结构，通常用于精确控制循环次数\n");
    printf(
        "for (initialization; continuation; action)\n"
        "   statement;\n"
    );
    printf(
        "上面的示例中括号里有三个语句:\n"
        "initialization:初始化表达式，用于初始化循环变量，只执行一次\n"
        "continuation:判断表达式，只要为true，就会不断执行循环体\n"
        "action:循环变量处理表达式，每轮循环结束后执行，使得循环变量发生变化\n"
    );
    printf("例如:\n")
    for (int x = 10; x > 5; x--);
        printf("x is %i\n" , x);
    printf("")
    return 0;
}