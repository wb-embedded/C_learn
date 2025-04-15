#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 20
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

//类型声明
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//定义电话簿类型
typedef struct directory
{
	PeoInfo data[MAX];
	int count;
}directory;

//初始化电话簿
void InitDir(directory* pd);

//增加联系人
void Add_dir(directory* pd);

//打印联系人
void Show_dir(const directory* pd);

//删除联系人
void Del_dir(directory* pd);

//查找联系人
void Search_dir(const directory* pd);

//修改联系人信息
void Mod_dir(directory* pd);

//对联系人信息排序
void Sort_dir(directory* pd);