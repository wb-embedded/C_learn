#include <stdio.h>

int main()
{
    float sum = 0;
    int flag = 1;
    for(int i = 1; i <= 100; i++)
    {
        sum += (1.0 / i) * flag;
        flag *= -1;
    }
    printf("%.2f\n", sum);

    return 0;
}