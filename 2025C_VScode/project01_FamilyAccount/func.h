#ifndef FUNC_H
#define FUNC_H
#define BALANCE_MAX_SET 2000.00
#define DEFAULT_COUNT 3
#define INC_COUNT 2

//创建一个记录结构体，记录收支类型，原因以及金额
typedef struct Account
{
    char type[10];
    // char* type;//赋值可能出现问题
	char desc[20];
	double money;
	double balance_now;
}Account;

//创建一个账单结构体，存储账单中数据条数，余额，容量
typedef struct AccountList
{
    Account* data;
	int count;
    int capacity;
	double balance;
}AccountList;

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

//显示菜单
void Menu();

//初始化账单
void InitAccount(AccountList*);

//读取已有账单
void LoadList(AccountList*);

//判断账单结构体是否还有足够容量
void CheckCapacity(AccountList*);

//将现有信息保存到文档中
void SaveAccount(AccountList*);

//添加收入记录
void AddIncome(AccountList*);

//添加支出记录
void AddSpend(AccountList*);

//打印账单
void PrintAccount(AccountList*);

//退出程序
void Exit(AccountList*);

//释放内存
void DestroyAccount(AccountList*);

#endif