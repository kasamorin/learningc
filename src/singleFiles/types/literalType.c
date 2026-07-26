#include<stdio.h>

int main(void){
  printf("字面量类型 Literal Type\n");
  int x = 114;
  printf("上面代码中，x是变量，114是字面量\n");
  printf("编译时，字面量也会写入内存，因此编译器必须为字面量指定数据类型，就像必须为变量指定数据类型一样\n");
  printf(
    "一般情况下，十进制整数字面量(比如123)会被编译器指定为int类型.如果一个数值比较大"
    "，超出了int能够表示的范围，编译器会将其指定为long int.如果数值超过了long int"
    "，会被指定为unsigned long.如果还不够大，就指定为long long或unsigned long long\n"
  );
  printf("小数(比如3.14)会被指定为double类型\n");
  
  return 0;
}
