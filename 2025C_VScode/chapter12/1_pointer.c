#include <stdio.h>

int main()
{
    int num = 0;
    int* p = &num;

    printf("num = %d\nnum的地址为:%p\n指针p为:%x\n指针的地址为:%p\n指针指向的值为:%d\n", num, &num, p, &p, *p);

    *p = 100;
    printf("num = %d\n", num);

    return 0;
}