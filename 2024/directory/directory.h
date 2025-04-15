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

//��������
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//����绰������
typedef struct directory
{
	PeoInfo data[MAX];
	int count;
}directory;

//��ʼ���绰��
void InitDir(directory* pd);

//������ϵ��
void Add_dir(directory* pd);

//��ӡ��ϵ��
void Show_dir(const directory* pd);

//ɾ����ϵ��
void Del_dir(directory* pd);

//������ϵ��
void Search_dir(const directory* pd);

//�޸���ϵ����Ϣ
void Mod_dir(directory* pd);

//����ϵ����Ϣ����
void Sort_dir(directory* pd);