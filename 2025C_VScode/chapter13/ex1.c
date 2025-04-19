#include <stdio.h>

struct abc
{
    int a;
    double b;
    char c;
};

int main()
{
    struct abc x;
    printf("%d", sizeof(x));

    return 0;
}