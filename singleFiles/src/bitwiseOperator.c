#include<stdio.h>

int main(void)
{
    printf("位运算符 Bitwise Operator\n");
    int x = 114;
    printf("%i\n" , ~x );
    printf("~运算符会把每一个二进制bit位反转，一般情况下，~x = -x -1 \n");
    printf("注意：~运算符不会改变变量本身的数值\n");
    printf("0110001001反转为%i\n" , ~0110001001 );
    printf("为什么不是(-)1001110110:0开头的常量默认被解析为八进制数，"
        "011001001解析为八进制后根据~x = -x - 1反转得该数\n");
    printf("C语言默认不支持直接写二进制数，只支持十进制、八进制、十六进制\n");
    printf("使用GNU标准时可以反转二进制，如下\n");
    printf("%i\n", ~0b0110001001); // 注意：这是 GNU 扩展，不是标准 C

    printf("如果必须使用无符号全部反转，可以使用无符号整数，如\n");
    unsigned int y = 0b0110001001; // 0b字面量=393，无符号~y = UINT_MAX - 393 = 4294966902
    printf("%u\n", ~y); 
    // float y = 1.2;
    // printf("%f\n" , ~y );
    printf("C语言默认禁止反转浮点数\n");

    printf("位运算符-与运算符\n");
    printf("与运算符&将两个值的每一个二进制位进行比较，返回一个新的值。"
        "当两个二进制位都为1，就返回1，否则返回0。\n");
    int andOperator = 0b10010011 & 0b00111101; // C23引入了0b来指定二进制，不加0b前一个数会解析为十进制，后一个解析为八进制
    printf("%i\n" , andOperator );

    printf("与运算符可以和赋值运算符简写为&=，如：\n");
    printf("int value = 3; value &= 0377;\n");
    printf("相当于\n");
    printf("int value = 3; value = value & 0377;\n");
    int value = 3;
    value &= 0377;
    printf("%i\n" , value );

    printf("位运算符-或运算符\n");
    printf("类似的，|或运算符同样比较二进制值，当两边都为1"
        "或只有一边为1时返回1,否则0,其余参考与运算符\n");
    printf("或运算符也可以与赋值运算符简写为|=\n");

    printf("异或运算符 XOR Operator\n");
    printf("异或运算符^将两个值的每一个二进制位进行比较，返回一个新的值。"
        "两个二进制位有且仅有一个为1，就返回1，否则返回0。\n");
    int valueXOR;
    valueXOR = value ^ 0377;
    printf("%i\n" , valueXOR );
    printf("同样的，异或运算符也可以与赋值运算符简写为^=\n");
    value ^= 0377;

    printf("左移运算符 LeftShift Operator\n");
    printf("左移运算符<<将左侧运算数的每一位，向左移动指定的位数，尾部空出来的位置使用0填充。\n");
    value = 1;
    value = value << 2;
    printf("%i\n" , value );
    printf("同样，左移运算符也可以简写为<<=\n");
    value = 1;
    value <<= 2; // 对于左移运算符，有一个简单的公式: a<<n=a×2^n，异或和右移也有，但比较复杂，不再展示
    printf("%i\n" , value );
    printf("无独有偶，右移运算符与左移类似：右移运算符>>将左侧运算数的每一位"
        "，向右移动指定的位数，尾部无法容纳的值将丢弃，头部空出来的位置使用0填充。\n");
    value = 1;
    value >>= 2;
    printf("%i\n" , value );
    printf("也可以简写为>>=\n");

    return 0;
}