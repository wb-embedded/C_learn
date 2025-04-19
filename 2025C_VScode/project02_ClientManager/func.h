#ifndef FUNC_H
#define FUNC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define DEFAULT_COUNT 3
#define INC_COUNT 2

//定义客户信息结构体
typedef struct Client
{
    int num;
    char name[20];
    char sex[10];
    int age;
    char tele[12];
    char address[20]; 
}Client;

//定义管理系统结构体
typedef struct ClientManage
{
    Client* data;
    int count;
    int capacity;
}CM;

//显示菜单
void ShowMenu();

//初始化
void InitClientManager(CM* pcm);

//读取文件中已有信息
void LoadClient(CM* pcm);

//检查结构体数组是否有足够空间
void CheckCapacity(CM* pcm);

//添加客户信息
void AddClient(CM* pcm);

//修改客户信息
void ModifyClient(CM* pcm);

//删除客户信息
void DelClient(CM* pcm);

//显示客户信息
void ShowClient(CM* pcm);

//保存客户信息到文件中
void SaveClient(CM* pcm);

//释放内存
void FreeClient(CM* pcm);

//退出管理系统
void ExitClient(CM* pcm);

#endif