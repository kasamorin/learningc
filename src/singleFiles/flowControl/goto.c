#include<stdio.h>
#include<unistd.h>

int main(void)
{
    printf("goto 语句 goto sentence\n");
    printf("goto 语句用于跳到指定的标签名。这会破坏结构化编程"
        ",建议不要轻易使用,这里为了语法的完整,介绍一下它的用法\n");
    char ch; // char 是什么？
    top : ch = getchar();
    if (ch == 'q')
        goto top;
    printf("上面示例中,top是一个标签名,可以放在正常语句的前面"
        ",相当于为这行语句做了一个标记。程序执行到goto语句,就会跳转到它指定的标签名\n");
    int x = 1;
    while ( x == 0 )
    {
        infinite_loop :
            printf("Hello World\n");
            sleep(1);
            goto infinite_loop;
    } // 为了能正常输出下面内容,判断 x == 0
    printf("上面的代码会无限循环\n");
    printf("goto 的一个主要用法是跳出多层循环\n");
    printf(
        "for(...){\n"
        "   for(...){\n"
        "       while(...){\n"
        "           do {\n"
        "               if (something_error_condition)\n"
        "                   goto bail;\n"
        "               } while(...);\n"
        "           }\n"
        "       }\n"
        "   }\n\n"
        "bail: //...."
    );
    printf("goto 的另一个作用是提早结束多重判断\n");
    printf(
        "if (do_sth1() == ERR)\n"
        "   goto error;\n"
        "if (do_sth2() == ERR)\n"
        "   goto error;\n"
        "if (do_sth3() == ERR)\n"
        "   goto error;\n"
    );
    printf("上面示例有四个判断,只要有一个发现错误,就使用 goto 跳过后面的判断\n");
    printf("注意,goto 只能在同一个函数之中跳转,并不能跳转到其他函数\n");
    return 0;
}