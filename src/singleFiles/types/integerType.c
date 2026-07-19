#include<stdio.h>
#include<limits.h>

int main(void)
{
    printf("整数类型 Integer Type\n");
    printf("整数类型用来表示较大的整数,类型声明使用int关键字");
    int a;
    printf("上面用整数类型声明了一个整数变量a\n");
    printf("不同计算机的int类型的大小是不一样的.比较常见的是使用4个字节(32位)存储一个int类型的值"
        ",但是2个字节(16位)或8个字节(64位)也有可能使用。它们可以表示的整数范围如下");
    printf(
        "16位:-32,768 到 32,767\n"
        "32位:-2,147,483,648 到 2,147,483,647\n"
        "64位:-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807\n"
    );
    a = INT_MAX;
    printf("%d\n" , a);
    a = 9223372036854775807; // 此时会溢出变为-1
    // 即使使用 -m64 编译,也无法使用64位存储,必须使用其他方式如
    // long,long long(并在数值后加LL),或<stdint.h>里定义的int64_t
    printf("%i\n" , a);

    printf("signed,unsigned\n");
    printf("C 语言使用signed关键字，表示一个类型带有正负号，包含负值;\n"
        "使用unsigned关键字，表示该类型不带有正负号，只能表示零和正整数\n");
    printf("对于int类型，默认是带有正负号的，也就是说int等同于signed int."
        "由于这是默认情况，关键字signed一般都省略不写，但是写了也不算错\n");
    signed int b; // 等同与 int b;
    printf("int类型也可以不带正负号，只表示非负整数.这时就必须使用关键字unsigned声明变量\n");
    unsigned int c = 4294967294;
    printf("整数变量声明为unsigned的好处是，同样长度的内存能够表示的最大整数值，增大了一倍."
        "比如，16位的signed int最大值为32,767，而unsigned int的最大值增大到了65,535");
    printf(
        "unsigned int里面的int可以省略,所以上面的变量声明也可以写成下面这样:\n"
        "unsigned a;\n"
    );
    printf(
        "字符类型char也可以设置signed和unsigned\n"
        "signed char c; // 范围为 -128 到 127\n"
        "unsigned char c; // 范围为 0 到 255\n"
    );
    printf("注意，C 语言规定char类型默认是否带有正负号，由当前系统决定.这就是说，char不等同于signed char"
        "，它有可能是signed char，也有可能是unsigned char.这一点与int不同，int就是等同于signed int");

    printf("整数的字类型\n");
    printf(
        "如果int类型使用4个或8个字节表示一个整数，对于小整数，这样做很浪费空间."
        "另一方面，某些场合需要更大的整数，8个字节还不够。为了解决这些问题，C 语言在int类型之外"
        ",又提供了三个整数的子类型。这样有利于更精细地限定整数变量的范围，也有利于更好地表达代码的意图"
        "\n"
    );
    printf(
        "short int(简写为short): 占用空间不多于int,一般占用2个字节(整数范围为-32768~32767)\n"
        "long int(简写为long): 占用空间不少于int,至少为4个字节\n" // 在Windows上通常为4个字节,在64位Linux通常为8字节
        "long long int(简写为long long): 占用空间多于long,至少为8个字节\n"

        "short int a;\n" "long int b;\n" "long long int c;\n"
        "上面代码分别声明了三种整数子类型的变量\n"
    );
    printf(
        "默认情况下,short、long、long long都是带符号的(signed),即signed关键字省略了."
        "它们也可以声明为不带符号(unsigned)，使得能够表示的最大值扩大一倍\n"
        "unsigned short int a;\n"
        "unsigned long int b;\n"
        "unsigned long long int c;\n"
    );
    printf("C 语言允许省略int,所以变量声明语句也可以写成下面这样:\n");
    printf(
        "short a;\n" "unsigned short a;\n"
        "long a;\n" "unsigned long a;\n"
        "long long a;\n" "unsigned long long a;\n"
    );
    printf(
        "不同的计算机，数据类型的字节长度是不一样的。确实需要32位整数时，应使用long类型而不是int类型"
        "，可以确保不少于4个字节；确实需要64位的整数时，应该使用long long类型，可以确保不少于8个字节."
        "另一方面，为了节省空间，只需要16位整数时，应使用short类型；需要8位整数时，应该使用char类型"
    );
    
    printf("整数类型的极限值\n");
    printf(
        "有时候需要查看，当前系统不同整数类型的最大值和最小值，C 语言的头文件limits.h提供了相应的常量"
        "，比如SCHAR_MIN代表 signed char 类型的最小值-128，SCHAR_MAX代表 signed char 类型的最大值127\n"
    );
    printf("为了代码的可移植性，需要知道某种整数类型的极限值时，应该尽量使用这些常量\n");
    printf(
        "SCHAR_MIN，SCHAR_MAX: signed char 的最小值和最大值\n"
        "SHRT_MIN，SHRT_MAX: short 的最小值和最大值\n"
        "INT_MIN，INT_MAX: int 的最小值和最大值\n"
        "LONG_MIN，LONG_MAX: long 的最小值和最大值\n"
        "LLONG_MIN，LLONG_MAX: long long 的最小值和最大值\n"
        "UCHAR_MAX: unsigned char 的最大值\n"
        "USHRT_MAX: unsigned short 的最大值\n"
        "UINT_MAX: unsigned int 的最大值\n"
        "ULONG_MAX: unsigned long 的最大值\n"
        "ULLONG_MAX: unsigned long long 的最大值\n"
    );

    printf("整数的进制\n");
    printf("C 语言的整数默认都是十进制数，如果要表示八进制数和十六进制数，必须使用专门的表示法\n");
    printf("八进制使用0作为前缀，比如017、0377\n");
    int octalNumber = 012;
    printf("%i\n" , octalNumber);
    octalNumber = 0377;
    printf("%i\n" , octalNumber);
    int hexadecimalNumber;
    hexadecimalNumber = 0x1A2B; // 相当于6699
    printf("%i\n" , hexadecimalNumber);
    int x = 0b101010; // C23 中为标准,在此之前是GNU扩展
    printf("%d\n" , x);
    printf(
        "注意，不同的进制只是整数的书写方法，不会对整数的实际存储方式产生影响."
        "所有整数都是二进制形式存储，跟书写方式无关。不同进制可以混合使用"
        "，比如10 + 015 + 0x20是一个合法的表达式"
    );
    printf("printf()相关占位符如下:\n");
    printf(
        "%%d: 十进制整数\n"
        "%%o: 八进制整数,如:%o\n"
        "%%x: 十六进制整数,如:%x\n"
        "%%#o: 带0前缀的八进制整数\n"
        "%%#x: 带0x前缀的十六进制整数\n"
        "%%#X: 带0X前缀的十六进制整数\n"
        , 0377 , 0xf
    );

    return 0;
}