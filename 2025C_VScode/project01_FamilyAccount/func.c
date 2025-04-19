#include "func.h"

void Menu()
{
    printf("-------------家庭收支记录软件-------------\n");
    printf("             1 收支明细\n");
    printf("             2 登记收入\n");
    printf("             3 登记支出\n");
    printf("             4 退    出\n");
    printf("             请选择(1-4):");
}

void InitAccount(AccountList* pa)
{
    assert(pa);
    pa->data = (Account*)malloc(DEFAULT_COUNT * sizeof(Account));
    if (pa->data == NULL)
    {
        perror("Initdir");
        return;
    }

    pa->count = 0;
    pa->capacity = DEFAULT_COUNT;

    LoadList(pa);
}

void LoadList(AccountList* pa)
{
    assert(pa);
    FILE* pf = fopen("account.txt", "r");
    if (pf == NULL)
    {
        return;
    }
    
    Account temp = { 0 };

    while (fscanf(pf, "%s %lf %lf %s\n", temp.type, &temp.money, &temp.balance_now, temp.desc) != EOF)//判断是否读取到文件结尾
    // while (fscanf(pf, "%s %lf %lf %s\n", temp.type, &temp.money, &temp.balance_now, temp.desc) == 4)//判断从文件中读取到的信息数量是否符合
    {
        CheckCapacity(pa);
        pa->data[pa->count] = temp;
        pa->count++;
    }

    fclose(pf);
    pf = NULL;
}

void CheckCapacity(AccountList* pa)
{
    assert(pa);
    if (pa->count == pa->capacity)
    {
        Account* ptr = (Account*)realloc(pa->data, (pa->capacity + INC_COUNT) * sizeof(Account));
        if (ptr != NULL)
        {
            pa->data = ptr;
            pa->capacity += INC_COUNT;
            ptr = NULL;
        }
        else
        {
            printf("添加记录失败\n");
            return;
        }
    }
}

void SaveAccount(AccountList* pa)
{
    assert(pa);
    FILE* pf = fopen("account.txt", "w");
    if (pf == NULL)
    {
        printf("文件打开失败\n");
        return;
    }

    for (int i = 0; i < pa->count; i++)
    {
        fprintf(pf, "%s %.2f %.2f %s \n", pa->data[i].type, pa->data[i].money, pa->data[i].balance_now, pa->data[i].desc);
    }

    fclose(pf);
    pf = NULL;
}

//添加收入记录
void AddIncome(AccountList* pa)
{
    assert(pa);
    CheckCapacity(pa);
    strcpy(pa->data[pa->count].type, "收入");
    // pa->data[pa->count].type = "收入";
    printf("本次收入金额:");
    scanf("%lf", &pa->data[pa->count].money);
    printf("本次收入说明:");
    scanf("%s", pa->data[pa->count].desc);
    pa->balance += pa->data[pa->count].money;
    pa->data[pa->count].balance_now = pa->balance;
    pa->count++;
}

//添加收入记录
void AddSpend(AccountList* pa)
{
    assert(pa);
    CheckCapacity(pa);
    strcpy(pa->data[pa->count].type, "支出");
    // pa->data[pa->count].type = "支出";
    printf("本次支出金额:");
    scanf("%lf", &pa->data[pa->count].money);
    if(pa->balance >= pa->data[pa->count].money)
    {
        printf("本次支出说明:");
        scanf("%s", pa->data[pa->count].desc);
        pa->balance -= pa->data[pa->count].money;
        pa->data[pa->count].balance_now = pa->balance;
        pa->count++;
    }
    else
    {
        printf("余额不足...\n");
    }
}

//打印账单
void PrintAccount(AccountList* pa)
{
    assert(pa);
    if(pa->count == 0)
    {
        printf("当前没有收支明细...来一笔吧！\n");
    }
    else
    {
        printf("-------------当前收支明细记录-------------\n");
        printf("收支\t\t收支金额\t\t账户金额\t\t说明\n");
        for (int i = 0; i < pa->count; i++)
        {
            printf("%s\t\t%8.2f\t\t%8.2f\t\t%s\n", pa->data[i].type, pa->data[i].money, pa->data[i].balance_now, pa->data[i].desc);
        }
    }
}

//退出程序
void Exit(AccountList* pa)
{
    assert(pa);
    SaveAccount(pa);
    printf("你确定要退出吗(y/n):");
    fflush(stdin); 
    while(1)
    {
        char ch;
        scanf("%c", &ch);
        if(ch == 'y')
        {
            DestroyAccount(pa);
            printf("退出成功...\n");
            exit(0);
        }
        else
        {
            getchar();
            printf("输入有误，请重新输入...\n");
        }
    }
}

void DestroyAccount(AccountList* pa)
{
	assert(pa);
	free(pa->data);
	pa->data = NULL;
	pa->count = 0;
	pa->capacity = 0;
}