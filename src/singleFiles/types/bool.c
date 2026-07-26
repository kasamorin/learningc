#include<stdio.h>
#include<stdbool.h>

int main(void)
{
  printf("布尔类型 Bool Type\n");
  printf("C 语言原来并没有为布尔值单独设置一个类型，而是使用整数0表示伪，所有非零值表示真\n");
  int x = 1;
  if (x)
  {
    printf("x is true\n");
  } else {
    printf("x is false\n");
  }
  printf("上面示例中，变量x等于1，C 语言就认为这个值代表真，从而会执行判断体内部的代码\n");
  printf("C99 标准添加了类型_Bool，表示布尔值.但是，这个类型其实只是整数类型的别名"
         "，还是使用0表示伪，1表示真，下面是一个示例\n");
  _Bool testBool;
  testBool = 1;
  if (testBool)
  {
    printf("testBool is true\n");
  }
  printf("头文件stdbool.h定义了另一个类型别名bool，并且定义了true代表1、false代表0."
         "只要加载这个头文件，就可以使用这几个关键字\n");
  bool testBoolType = false;
  if (testBoolType) {
    printf("testBoolType is true\n");
  } else {
    printf("testBoolType is false\n");
  }
  return 0;
}
