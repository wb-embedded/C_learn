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

//��ʼ��
void InitDir(directory* pd);

//�ͷſ��ٵ��ڴ�
void DestroyDir(directory* pd);

//������ϵ��
void AddDir(directory* pd);

//�������
void CheckCapacity(directory* pd);

//��ʾ�绰��
void ShowDir(directory* pd);

//ɾ����ϵ��
void DelDir(directory* pd);

//������ϵ��
void SearchDir(directory* pd);

//�޸���ϵ����Ϣ
void ModifyDir(directory* pd);

//����ϵ������
void SortDir(directory* pd);

//������ϵ����Ϣ���ļ�
void SaveDir(directory* pd);

//����������ϵ����Ϣ
void LoadDir(directory* pd);