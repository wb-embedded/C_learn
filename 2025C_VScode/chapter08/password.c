#include <stdio.h>

int main()
{
    int pwd1 = 123456;
    int pwd2 = 0;

    printf("Enter password: ");
    scanf("%d", &pwd2);

    while(pwd1 != pwd2)
    {
        printf("Wrong password! Try again: ");
        scanf("%d", &pwd2);
    }

    printf("Correct password!\n");

    return 0;
}