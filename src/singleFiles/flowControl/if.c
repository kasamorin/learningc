#include<stdio.h>
#include<limits.h>

int main(void)
{
    printf("流程控制 Flow Control\n");
    printf("if语句\n");

    printf("if语句用于条件判断,当满足条件时执行语句\n");
    printf("如：if (test) run;\n");
    printf("上面的示例,当test判断为真（>=1时）,则执行run语句\n");
    printf("上面示例里,判断条件必须加括号,否则会报错。"
        "括号后的语句体部分可以是一个语句,也可以是放在大括号里的复合语句\n");
    printf("示例:\n");
    int x = 114;
    if ( x == 114 )
        printf("x is 114\n"); // 单语句也可以与if放到同一行,但为了可读性通常另起一行加tab
    
    int imx = INT_MAX;
    if ( imx == INT_MAX )
    {
        printf("imx is %i\n" , imx);
        imx = 0;
        imx++;
    }

    printf("if有一个else分支,指定当if的条件判断为伪时执行的命令,如:\n");
    printf("if (test) run\n"
        "    else run\n");
    printf("示例:\n");
    if ( imx > x )
        printf("imx is bigger than x\n");
    else
        printf("imx is smaller than x\n");

    printf("另一个示例：\n");
    int max;
    if ( x > imx )
    {
        max = x;
        printf("max is %i\n" , max );
    } else {
        max = imx;
        printf("max is %i\n" , max );
    }
    printf("if 也可以套娃,如:\n");
    int a,b,c,d,e;
    a = 1; b = 2; c = 3; d = 4; e = 5;
    if ( a == 1 )
        printf("a is 1\n");
    else if ( b == 2 )
        printf("b is 2\n");
    /* 以上判断a是否为1,如果是,输出a is 1,不是
    ,就判断b是否为2,如果是,则输出b is 2。我认为
    应该可以用来fallback*/
    printf("else只跟最近的一个if匹配,这个最近的意思是当编译到else时时间上与该else相差最短的if,不会管这个else之后的if\n");
    printf("如:\n");
    if ( x > 110 )
        if ( imx > 0 )
            printf("x > 110 and imx > 0\n");
    else
        printf("nothing\n");
    printf("以上实际运行是如果x大于110则判断imx是否大于0"
        ",如果都为真,则运行第一个printf,如果imx不大于0"
        ",则运行第二个printf,如果都伪,则什么都不做\n");
    printf("这样写容易让机器理解错意图\n");
    printf("因此,为了明确意图、便于阅读、防止出错,建议在编写时添加大括号,如:\n");
    if ( x > 210 )
    {
        if ( imx > 0 )
        {
            printf("x is bigger than 110 and imx is bigger than 0\n");
        }
    } else
    {
        printf("nothing\n");
    }
    return 0;
}