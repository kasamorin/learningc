#include<stdio.h>

int main(void)
{
    printf("关系运算符 Relational Operator\n");
    int x;
    x = 3;
    if ( x == 3 )
    {
        printf("x is 3\n");
    }

    if ( x = 3 )
    {
        printf("When write 'x = %i',it is always true.\n" , x );
    }
    int a = 1;
    int b = 2;
    int c = 3;
    if ( a < b && b < c )
    {
        printf("b的大小在a和c之间\n");
    }

    return 0;
}