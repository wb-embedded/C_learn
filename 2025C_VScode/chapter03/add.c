#include <stdio.h>
int main()
{
    //声明两个变量以及代表和的变量
    int a = 0, b = 0, sum;
    //从键盘输入两个数
    printf("请输入要计算的两个数：");
    scanf("%d %d", &a, &b);
    //求和并输出结果
    sum = a + b;
    printf("sum = %d\n", sum);

    return 0;
}