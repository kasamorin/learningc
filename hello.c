#include<stdio.h>
#define EXIT_SUCCESS 0

int main(void)
{
    int x; // 声明变量
    x = 2; // 拷贝赋值
    int testOne , testTwo; // 一次性声明多个变量    
    int y = {0}; // "拷贝列表初始化"，{}内不得为空
    // C 中不存在 int y{};
    y = ( x = x * 2 ); // 先为x重新赋值，然后通过x的返回值给y赋值
    int a,b,c,d;
    a = b = c = d = 969; // 一次性给多个变量赋值
    int z; z/*放在语句中的注释，杠星注释会被替换为一个空格*/= 114; // 多语句同行
    ; // 空语句
    x
    =
    514
    ; // 多行语句
    1 + 1; // 由表达式组成的语句，虽然没有任何作用

    printf("Hello World!\n");
    printf("This is %i sentence\n" , 1); // %i 是占位符，必须为整数
    printf("%s will fuck u tomorrow\n" , "Evil"); // %s 是占位符，插入字符串
    printf("%s will fuck u at %i:00 this night\n" , "Neuro" , 23); // 占位符是一一对应关系
    printf("占位符限定宽度，如： %5d 要求该占位符占五格，如不满则在前添加空格，%-5d则是在后面\n" , 123 ,456);
    printf("对于小数，如 %12f 会在后面添加0\n" , 123.45);
    printf("上面示例中，%12f表示输出的浮点数最少要占据12位。由于小数的默认显示精度是小数点后6位，所以123.45输出结果的头部会添加2个空格。\n");
    printf("可以通过 %+d 使正数前添加+号, %+d 也会保留-号\n" , 114 , -514);
    printf("对于小数，可以选择不保留6小数点后六位，如%12.2f\n" , 114.514);
    printf("也可以通过*来传递占位符参数，如 %*.*f\n" , 6 , 2 , 114.514);
    printf("通过 %.*s 可以限制传入字符数量\n" , 4 , "Hello C");
    /* 占位符列表如 占位符.md */

    return EXIT_SUCCESS;
}