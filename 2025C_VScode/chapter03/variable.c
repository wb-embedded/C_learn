#include <stdio.h>

int main()
{
    //先声明变量，再赋值
    int a;
    a = 10;

    //声明变量的同时赋值
    int b = 20;

    printf("%d ,%d\n", a, b);

    //变量的值可以改变
    a = 30;
    b = a;

    printf("%d ,%d", a, b);

    return 0;
}