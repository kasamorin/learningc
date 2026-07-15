#include<stdio.h>

int main(void)
{
    printf("逗号运算符 Comma Operator\n");
    printf("逗号运算符用于将多个表达式写在一起,从左到右依次运行每个表达式。\n");
    printf("如：x = 10,y = 20;\n");
    printf("上面示例中,有两个表达式（x = 10和y = 20）,逗号使得它们可以放在同一条语句里面。\n");
    printf("逗号运算符返回最后一个表达式的值,作为整个语句的值。如：\n");
    int x;
    printf("int x;\n");
    x = (1,2,3);
    printf("x = (1,2,3);\n");
    printf("x = %i\n" , x );
    printf("上面示例中,括号里面的逗号运算符,返回最后一个表达式的值,所以变量x等于3。\n");     
    return 0;
}