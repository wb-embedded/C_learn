#include <stdio.h>

void print_pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if ( i != n)
        {
            for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        printf("*");
        for (int j = 1; j < 2 * (i - 1); j++)
        {
            printf(" ");
        }
        if (i != 1)
        {
            printf("*");
        }
        }
        else 
        {
            for (int j = 1; j <= 2 * n - 1; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
}

int main()
{
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    print_pyramid(num);

    return 0;
}