#include<stdio.h>

int main(void)
{
    printf("continue语句 continue sentence");
    printf("continue语句用于在循环体内部终止本轮循环"
        ",进入下一轮循环。只要遇到continue语句,循环体内部后面的语句就不执行了"
        ",回到循环体的头部,开始执行下一轮循环\n");
    int i,j;
    for (i = 10; i > 0; i-- )
    {
        for (j = 10; j > 0; j--)
        {
            printf("j is %d now\n" , j);
            continue;
        }
    }
    printf("上面示例中,有没有continue语句,效果一样,都表示跳到下一个j\n");
    int ch;
    printf("Please type a character: ");
    while ( (ch = getchar()) != '\n' && ch != EOF )
    {
        if (ch == '\t') continue;
        putchar(ch);
    }
    printf("\n上面示例中,只要读到的字符是制表符(\\t),就用continue语句跳过该字符,读取下一个字符\n");
    return 0;
}