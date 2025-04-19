#include <stdio.h>

int main()
{
    for (int x = 0, y = 10; x < 3, y > 5; x++, y--)
    {
        printf("x = %d, y = %d\n", x, y);
    }

    return 0;
}