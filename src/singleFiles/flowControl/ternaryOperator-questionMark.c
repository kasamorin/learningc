#include<stdio.h>

int main(void)
{
    printf("三元运算符-? Ternary Operator\n");
    printf("C 语言存在一个三元表达式:？,可以用作if...else的简写形式\n");
    printf("例如:<expression1> ? <expression2> : <expression3>\n");
    printf("这个操作符的含义是,表达式expression1如果为true（非0值）"
        ",就执行expression2,否则执行expression3\n");
    int x;
    x = 1;
    x == 1 ? printf("x is 1\n") : printf("x is %i" , x); // 语句不添加分号
    int y;
    y = 2;
    ( x > y ) ? printf("x is bigger than y\n") : printf("y is >= x\n"); // 判断大小并输出
    ( x > y ) ? x : y; // 判断大小并返回值,不输出,相当于：
    if ( x > y )
        return x;
    else
        return y;
    
    return 0;
}