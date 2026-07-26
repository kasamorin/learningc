#include<stdio.h>

int main(void) {
  printf("字面量后缀 Literal Suffix\n");
  printf(
    "有时候，程序员希望为字面量指定一个不同的类型.比如，编译器将一个整数字面量指定为int类型"
    "，但是程序员希望将其指定为long类型，这时可以为该字面量加上后缀l或L，编译器就知道"
    "要把这个字面量的类型指定为long\n"
  );
  int x = 123L;
  printf(
    "上面代码中，字面量123有后缀L，编译器就会将其指定为long类型.这里123L写成123l"
    "，效果也是一样的，但是建议优先使用L，因为小写的l容易跟数字1混淆\n"
  );
  printf(
    "八进制和十六进制的值，也可以使用后缀l和L指定为 Long 类型，比如020L和0x20L\n"
  );
  int y = 0377L;
  int z = 0x7fffL;
  printf("%i,%d\n" , y , z);
  return 0;
}
