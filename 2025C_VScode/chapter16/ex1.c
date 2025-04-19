#include <stdio.h>

int main()
{
    const char* str = "Hello, World!";
    str = "hello";
    printf("%s\n", str);

    return 0;
}