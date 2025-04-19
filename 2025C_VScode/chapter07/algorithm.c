#include <stdio.h>

int main()
{
    int a = 10;
    double b = 3.14;

    //1.一元运算符
    int c = -b;
    double d = -a;
    printf("c = %d d = %f\n", c, d);

    //2.加减乘除和取余
    printf("a + b = %f\n", a + b);
    printf("a - b = %f\n", a - b);
    printf("a * b = %f\n", a * b);
    printf("a / b = %f\n", a / b);
    printf("a %% c = %d\n", a % c);

    return 0;
}