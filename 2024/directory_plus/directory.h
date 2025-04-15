#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define DEFAULT_SZ 3
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 20
#define MAX_ADDR 30
#define INC_SZ 2

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct directory
{
	PeoInfo* data;
	int count;
	int capacity;
}directory;

//初始化
void InitDir(directory* pd);

//释放开辟的内存
void DestroyDir(directory* pd);

//增加联系人
void AddDir(directory* pd);

//检查容量
void CheckCapacity(directory* pd);

//显示电话簿
void ShowDir(directory* pd);

//删除联系人
void DelDir(directory* pd);

//查找联系人
void SearchDir(directory* pd);

//修改联系人信息
void ModifyDir(directory* pd);

//对联系人排序
void SortDir(directory* pd);

//保存联系人信息到文件
void SaveDir(directory* pd);

//载入已有联系人信息
void LoadDir(directory* pd);