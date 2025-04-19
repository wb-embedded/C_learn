#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* random_array(int* arr)
{
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand();
    }
    return arr;
}

int main()
{
    int arr[10];

    int* ptr = random_array(arr);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}