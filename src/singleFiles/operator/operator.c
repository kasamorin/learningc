#include<stdio.h>

int main(void)
{
    printf("运算符\n");
    int x = -114;   // 可以使用-来改变正负
    int y = +x+1;   // +通常可以忽略
    int z = x + - y;// 可以部分叠加运算符
    float a = 5 / 2;

    int num = 5;
    printf("%i\n" , num * num );    // 使用 * 完成乘法
    printf("%i\n" , num / num );    // 使用 / 完成除法
    printf("%f\n" , (float)(num / 2) );      // 在进行除法时默认仅进行整数运算
    printf("%f\n" , a );            // 同上
    printf("%f\n" , num / 2.0 );    // 任意一方是浮点数时进行浮点运算

    num = ( num / 20 ) * 100;       // 由于num / 20进行的是整数运算，得出0,而0乘任何数都得0,因此在下一行输出了0
    printf("%f\n" , (float)(num) );

    int residualValue = 6 % 4;      // 计算余值，符号取决于前一个数字
    printf("%i\n" , residualValue );
    residualValue = -6 % 4;
    printf("%i\n" , residualValue );

    /* 赋值运算的简写形式见 运算符.md */

    // 接下来演示关于自增运算符和推荐写法
    int i;
    i = 42;
    int j;
    j = (i++ + 10); // 先返回 i 原始数值，然后+1,再进行运算
    printf("\n %i , %i \n" , i , j);
    j = (++i + 10); // 先自增再返回数值
    /* 以上两种虽然有效，但容易混淆，弄错i和j的数值，更好的如下 */
    i = 42;
    i++;
    j = (i + 10);
    printf("%i , %i \n" , i , j);
    // 或
    i = 42;
    j = (i + 10);
    i++;
    printf("%i , %i \n" , i , j);

    return 0;
}