#include <stdio.h>
#include <math.h>

int main()
{
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i = 1;

    for(i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            printf("不是质数\n");
            break;
        }
    }

    if(i < sqrt(num) + 1)
        printf("是质数\n");

    return 0;
}