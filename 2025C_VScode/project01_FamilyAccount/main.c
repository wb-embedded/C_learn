#include "func.h"

int main()
{
    AccountList al = {0};
    al.balance = BALANCE_MAX_SET;
    InitAccount(&al);
    int input = 0;
    while(input != 4)
    {
        Menu();
        scanf("%d", &input);
        switch(input)
        {
            case 1:PrintAccount(&al);
                break;
            case 2:AddIncome(&al);
                break;
            case 3:AddSpend(&al);
                break;
            case 4:Exit(&al);
                break;
            default:
                printf("输入错误，请重新输入\n");
                break;
        }
    }

    return 0;
}