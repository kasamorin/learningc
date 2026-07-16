#include<stdio.h>
#include<unistd.h>

int main(void)
{
    printf("for语句 for sentence\n");
    printf("for语句是最常用的循环结构,通常用于精确控制循环次数\n");
    printf(
        "for (initialization; continuation; action)\n"
        "   statement;\n"
    );
    printf(
        "上面的示例中括号里有三个语句:\n"
        "initialization:初始化表达式,用于初始化循环变量,只执行一次\n"
        "continuation:判断表达式,只要为true,就会不断执行循环体\n"
        "action:循环变量处理表达式,每轮循环结束后执行,使得循环变量发生变化\n"
    );
    printf("例如:\n");
    for (int x = 10; x > 5; x--)
        printf("x is %i\n" , x);
    printf("for语句条件部分每个都可以有多个语句,语句之间用逗号分隔\n");
    int i,j;
    for (i = 10,j = 999; i < 10; i++,j--)
    {
        printf("i is %d now and j is %d now\n" , i , j);
    }
    printf("for条件里的三个语句并不是必要的,甚至可以全部忽略,如以下会无限循环:\n");
    for (;;)
    {
        printf("not litmit\n");
        sleep(1.2); // C语言的sleep默认无符号整数,1.2会被截断为1
    }
    return 0;
}