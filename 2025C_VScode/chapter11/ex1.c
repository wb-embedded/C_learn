#include <stdio.h>

int peach(int n)
{
    if(n == 1)
        return 1;
    else
        return 2 * (peach(n - 1) + 1);
}

int main()
{
    printf("%d\n", peach(10));

    return 0;
}