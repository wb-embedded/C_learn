#include <stdio.h>

#if _WIN32
    #include <windows.h>
    #define SLEEP(t) Sleep(1000 * t)
#elif __linux__
    #include <unistd.h>
    #define SLEEP sleep
#endif

int main()
{
    SLEEP(5);
    printf("Hello World!\n");

    return 0;
}