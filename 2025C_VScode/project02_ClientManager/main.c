#include "func.h"

int main()
{
    CM cm = {0};
    InitClientManager(&cm);
    int input = 0;

    while(input != 5)
    {
        ShowMenu();
        scanf("%d", &input);
        switch(input)
        {
            case 1:
                AddClient(&cm);
                break;
            case 2:
                ModifyClient(&cm);
                break;
            case 3:
                DelClient(&cm);
                break;
            case 4:
                ShowClient(&cm);
                break;
            case 5:
                ExitClient(&cm);
                break;
            default:
                printf("输入错误，请重新输入\n");
        }
    }

    return 0;
}