#include<stdio.h>

int main(void)
{
    printf("逻辑运算符 Logical Operator\n");
    int x,y;
    x = 1; y = 2;
    if ( x == 1 && y == 2 )
    {
        printf("&& 与运算符,当&&左右皆返回1时,则整体1\n");
    }

    if ( x == 1 || y == 3 )
    {
        printf("|| 或运算符,两边至少一个为1,则整体1\n");
    }

    if ( !(x > 2) )
    {
        printf("! 否运算符,优先级较高,作用是取反,如!x,x非0时,返回0,否则返回1\n");
        printf("对于本示例,更合理的做法是if (x >= 12)\n");
    }
    int data_loading;
    data_loading = 0;
    if ( !data_loading )
    {
        printf("一种常用的用法：判断变量是否为零或未触发。还有一种常用用法是判断指针是否为空\n");
    }
    int notZeroData;
    notZeroData = 114;
    if ( !!notZeroData )
    {
        printf("使用多个否运算符可以使判断严格为1或0\n");
    }
    printf("逻辑运算符的执行顺序是先左后右,因此若左侧运算足以"
         "确认整个运算符真伪时,不会对右侧运算,如 if( x == 2 && y == 114),在这个示例里"
         "左侧运算符已经判断为伪,右侧不会继续运算\n");
    printf("由于逻辑运算符从左到右,因此以下代码是有问题的"
         "while ((x++ < 10) && (x + y < 20))"
         "上面示例中,执行左侧表达式后,变量x的值就已经变了。"
         "等到执行右侧表达式的时候,是用新的值在计算,这通常不是原始意图。\n");
    return 0;
}