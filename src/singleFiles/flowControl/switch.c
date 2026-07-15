#include<stdio.h>
#include<limits.h>

int main(void)
{
    printf("switch语句 switch sentence\n");
    printf("switch 语句是一种特殊形式的 if...else 结构"
        ",用于判断条件有多个结果的情况。它把多重的else if改成更易用、可读性更好的形式\n");
    printf("基础语法:\n");
    printf(
        "switch (expression)\n"
        "{\n"
        "   case value1 : statement\n"
        "   case value2 : statement\n"
        "   default : statement\n"
        "}\n"
    );
    printf("上面代码中,根据表达式expression不同的值,执行相应的case分支。如果找不到对应的值,就执行default分支\n");
    printf("示例:\n");
    int x;
    x = 114;
    switch ( x )
    {
        case 1 :
            printf("true\n");
            break;
        case 0 :
            printf("false\n");
            break;
        default :
            printf("no true or false\n");
    }
    printf("上面示例中,根据变量grade不同的值,会执行不同的case分支。"
        "如果等于0,执行case 0的部分；如果等于1,执行case 1的部分；"
        "否则,执行default的部分。default表示处理以上所有case都不匹配的情况\n");
    printf("每个case语句体的结尾,都应该有一个break语句,作用是跳出整个switch结构"
        ",不再往下执行。如果缺少break,就会导致继续执行下一个case或default分支");
    switch ( x ) // 注意,switch通常不用来做真假判断,而是条件选择,因此当变量取值为(0,1)时,编译器会警告
    {
        case 0 :
        case 1 :
            printf("true\n");
            break;
        default :
            printf("Illegal\n");
    }
    printf("利用这一特性,我们可以让不同结果执行相同语句,如上\n");
    printf("case后面的语句体,不用放在大括号里面,这也是为什么需要break的原因\n");
    printf("default分支用来处理前面的 case 都不匹配的情况,最好放在所有 case 的后面,这样就不用写break语句。"
        "这个分支是可选的,如果没有该分支,遇到所有的 case 都不匹配的情况,就会直接跳出整个 switch 代码块\n");
    return 0;
}