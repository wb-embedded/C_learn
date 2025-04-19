#include "func.h"

//显示菜单
void ShowMenu()
{
    printf("------------客户信息管理系统------------\n");
    printf("\n");
    printf("            1  添 加 客 户\n");
    printf("            2  修 改 客 户\n");
    printf("            3  删 除 客 户\n");
    printf("            4  客 户 列 表\n");
    printf("            5  退       出\n");
    printf("            请选择(1-5):");
}

//初始化
void InitClientManager(CM* pcm)
{
    assert(pcm);
    pcm->data = (Client*)malloc(sizeof(Client) * DEFAULT_COUNT);
    if(pcm->data == NULL)
    {
        return;
    }

    pcm->count = 0;
    pcm->capacity = DEFAULT_COUNT;

    LoadClient(pcm);
}

//读取文件中已有信息
void LoadClient(CM* pcm)
{
    assert(pcm);
    FILE* pf = fopen("client.txt", "r");
    if(pf == NULL)
    {
        return;
    }

    Client temp = {0};

    while(fscanf(pf, "%d %s %s %d %s %s", &temp.num, temp.name, temp.sex, &temp.age, temp.tele, temp.address) != EOF)
    {
        CheckCapacity(pcm);
        pcm->data[pcm->count] = temp;
        pcm->count++;
    }

    fclose(pf);
    pf = NULL;
}

//检查结构体数组是否有足够空间
void CheckCapacity(CM* pcm)
{
    assert(pcm);
    if(pcm->count == pcm->capacity)
    {
        Client* ptr = (Client*)realloc(pcm->data, sizeof(Client) * (pcm->capacity + INC_COUNT));
        if(ptr == NULL)
        {
            return;
        }
        pcm->data = ptr;
        pcm->capacity += INC_COUNT;
        ptr = NULL;
    }
}

//添加客户信息
void AddClient(CM* pcm)
{
    assert(pcm);
    CheckCapacity(pcm);
    printf("---------------添加客户---------------\n");
    pcm->data[pcm->count].num = pcm->count + 1;
    printf("姓名：");
    scanf("%s", pcm->data[pcm->count].name);
    printf("性别：");
    scanf("%s", pcm->data[pcm->count].sex);
    printf("年龄：");
    scanf("%d", &pcm->data[pcm->count].age);
    printf("电话：");
    scanf("%s", pcm->data[pcm->count].tele);
    printf("地址：");
    scanf("%s", pcm->data[pcm->count].address);
    printf("---------------添加完成---------------\n");
    pcm->count++;
}

//修改客户信息
void ModifyClient(CM* pcm)
{
    assert(pcm);
    printf("---------------修改客户---------------\n");
    printf("请选择待修改客户编号(-1退出):");
    int select = 0;
    scanf("%d", &select);
    if(select == -1)
    {
        printf("已退出修改客户信息...\n");
        return;
    }
    else if(select > 0 && select <= pcm->count)
    {
        printf("---------------修改客户---------------\n");
        printf("姓名(%s):", pcm->data[select - 1].name);
        scanf("%s", pcm->data[select - 1].name);
        printf("性别(%s):", pcm->data[select - 1].sex);
        scanf("%s", pcm->data[select - 1].sex);
        printf("年龄(%d):", pcm->data[select - 1].age);
        scanf("%d", &pcm->data[select - 1].age);
        printf("电话(%s):", pcm->data[select - 1].tele);
        scanf("%s", pcm->data[select - 1].tele);
        printf("地址(%s):", pcm->data[select - 1].address);
        scanf("%s", pcm->data[select - 1].address);
        printf("---------------修改完成---------------\n");
    }
    else
    {
        printf("修改失败,id不存在\n");
        return;
    }
    printf("---------------修改成功---------------\n");
}

//删除客户信息
void DelClient(CM* pcm)
{
    assert(pcm);
    printf("---------------删除客户---------------\n");
    printf("请选择待删除客户编号(-1退出):");

    int select = 0;
    scanf("%d", &select);
    fflush(stdin);

    if(select == -1)
    {
        printf("已退出删除客户信息...\n");
        return;
    }
    else if(select > 0 && select <= pcm->count)
    {
        while(1)
        {
            printf("确认是否删除(y/n):");
            char ch = getchar();
            fflush(stdin);
            if(ch == 'y')
            {
                for(int i = select - 1; i < pcm->count - 1; i++)
                {
                    pcm->data[i] = pcm->data[i + 1];
                    pcm->data[i].num -= 1;
                }
                pcm->count--;
                printf("---------------删除成功---------------\n");
                return;
            }
            else if(ch == 'n')
            {
                printf("已放弃删除客户信息...\n");
                return;
            }
            else
            {
                printf("输入错误,请重新输入...\n");
            }
        }
    }
    else
    {
        printf("删除失败,id不存在\n");
        return;
    }
}

//显示客户信息
void ShowClient(CM* pcm)
{
    assert(pcm);
    if(pcm->count == 0)
    {
        printf("当前没有客户信息...\n");
    }
    else
    {
        printf("---------------客户列表---------------\n");
        printf("编号\t\t姓名\t\t性别\t\t年龄\t\t电话\t\t地址\n");
        for(int i = 0; i < pcm->count; i++)
        {
            printf("%d\t\t%s\t\t%s\t\t%d\t\t%s\t\t%s\n", pcm->data[i].num, pcm->data[i].name, pcm->data[i].sex, pcm->data[i].age, pcm->data[i].tele, pcm->data[i].address);
        }
    }
}

//保存客户信息到文件中
void SaveClient(CM* pcm)
{
    assert(pcm);
    FILE* fp = fopen("client.txt", "w");
    if(fp == NULL)
    {
        return;
    }

    for(int i = 0; i < pcm->count; i++)
    {
        fprintf(fp, "%d %s %s %d %s %s\n", pcm->data[i].num, pcm->data[i].name, pcm->data[i].sex, pcm->data[i].age, pcm->data[i].tele, pcm->data[i].address);
    }

    fclose(fp);
    fp = NULL;
}

//释放内存
void FreeClient(CM* pcm)
{
    assert(pcm);
    free(pcm->data);
    pcm->data = NULL;
    pcm->capacity = 0;
    pcm->count = 0;
}

//退出管理系统
void ExitClient(CM* pcm)
{
    assert(pcm);
    while(1)
    {
        fflush(stdin);
        printf("是否退出系统(y/n):");
        char ch;
        scanf("%c", &ch);
        fflush(stdin);
        if(ch == 'y')
        {
            SaveClient(pcm);
            FreeClient(pcm);
            printf("已退出管理系统...\n");
            return;
        }
        else if(ch == 'n')
        {
            printf("已放弃退出管理系统...\n");
            return;
        }
        else
        {
            printf("输入错误,请重新输入...\n");
        }
    }
}