#include "directory.h"

//��ʼ��
void InitDir(directory* pd)
{
	assert(pd);
	pd->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (pd->data == NULL)
	{
		perror("Initdir");
		return;
	}
	
	pd->count = 0;
	pd->capacity = DEFAULT_SZ;

	LoadDir(pd);
}

//����������ϵ����Ϣ
void LoadDir(directory* pd)
{
	assert(pd);
	FILE* pfread = fopen("directory.txt", "r");
	if (pfread == NULL)
	{
		perror("LoadDir");
		return;
	}
	PeoInfo temp = { 0 };
	//�����ƶ�ȡ��Ϣ
	//while (fread(&temp, sizeof(PeoInfo), 1, pfread))
	//{
	//	CheckCapacity(pd);
	//	pd->data[pd->count] = temp;
	//	pd->count++;
	//}
	//��ȡ�ı���Ϣ
	while (fscanf(pfread, "%s %d %s %s %s\n", temp.name, &(temp.age), temp.sex, temp.tele, temp.addr) != EOF)
	{
		CheckCapacity(pd);
		pd->data[pd->count] = temp;
		pd->count++;
	}

	fclose(pfread);
	pfread = NULL;
}

//������ϵ����Ϣ���ļ�
void SaveDir(directory* pd)
{
	FILE* pfwrite = fopen("directory.txt", "w");
	if (pfwrite == NULL)
	{
		perror("SaveDir");
		return;
	}
	int i = 0;
	for (i = 0; i < pd->count; i++)
	{
		//������д��
		//fwrite(pd->data+i,sizeof(PeoInfo),1,pfwrite);
		//���ı�д��
		fprintf(pfwrite, "%s %d %s %s %s\n", pd->data[i].name, pd->data[i].age, pd->data[i].sex, pd->data[i].tele, pd->data[i].addr);
	}

	fclose(pfwrite);
	pfwrite = NULL;
}

//�ͷſ��ٵ��ڴ�
void DestroyDir(directory* pd)
{
	assert(pd);
	free(pd->data);
	pd->data = NULL;
	pd->count = 0;
	pd->capacity = 0;
}

//�������
void CheckCapacity(directory* pd)
{
	if (pd->count == pd->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pd->data, (pd->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pd->data = ptr;
			pd->capacity += INC_SZ;
			printf("������\n");
		}
		else
		{
			perror("AddDir");
			printf("������ϵ��ʧ��\n");
			return;
		}
	}
}

//������ϵ��
void AddDir(directory* pd)
{
	assert(pd);
	CheckCapacity(pd);
	printf("����������:");
	scanf("%s", pd->data[pd->count].name);
	printf("����������:");
	scanf("%d", &(pd->data[pd->count].age));
	printf("�������Ա�:");
	scanf("%s", &(pd->data[pd->count].sex));
	printf("������绰:");
	scanf("%s", pd->data[pd->count].tele);
	printf("�������ַ:");
	scanf("%s", pd->data[pd->count].addr);

	pd->count++;
	printf("���ӳɹ�\n");
}

//��ʾ�绰��
void ShowDir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("�绰��Ϊ��\n");
		return;
	}
	//��ӡ��ϢĿ¼
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	int i = 0;
	for (i = 0; i < pd->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pd->data[i].name, pd->data[i].age, pd->data[i].sex, pd->data[i].tele, pd->data[i].addr);
	}
}

//ͨ����������
static int FindByName(directory* pd, char name[])
{
	assert(pd);
	int i = 0;
	for (i = 0; i < pd->count; i++)
	{
		if (strcmp(pd->data[i].name, name) == 0)
			return i;
	}
	return -1;
}

//ɾ����ϵ��
void DelDir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("�绰��Ϊ��\n");
		return;
	}
	char name[MAX_NAME];
	printf("������Ҫɾ����ϵ�˵�����:");
	scanf("%s", name);
	int pos = FindByName(pd, name);
	if (pos == -1)
	{
		printf("��ϵ�˲�����\n");
		return;
	}
	else
	{
		int i = 0;
		for (i = pos; i < pd->count - 1; i++)
		{
			pd->data[i] = pd->data[i + 1];
		}
		pd->count--;
		printf("ɾ���ɹ�\n");
	}
}

//������ϵ��
void SearchDir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("�绰��Ϊ��\n");
		return;
	}
	char name[MAX_NAME];
	printf("������Ҫ������ϵ�˵�����:");
	scanf("%s", name);
	int pos = FindByName(pd, name);
	if (pos == -1)
	{
		printf("��ϵ�˲�����\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pd->data[pos].name, pd->data[pos].age, pd->data[pos].sex, pd->data[pos].tele, pd->data[pos].addr);
	}
}

//�޸���ϵ����Ϣ
void ModifyDir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("�绰��Ϊ��\n");
		return;
	}
	char name[MAX_NAME];
	printf("������Ҫ�޸���ϵ�˵�����:");
	scanf("%s", name);
	int pos = FindByName(pd, name);
	if (pos == -1)
	{
		printf("��ϵ�˲�����\n");
		return;
	}
	else
	{
		printf("����������:");
		scanf("%s", pd->data[pos].name);
		printf("����������:");
		scanf("%d", &(pd->data[pos].age));
		printf("�������Ա�:");
		scanf("%s", &(pd->data[pos].sex));
		printf("������绰:");
		scanf("%s", pd->data[pos].tele);
		printf("�������ַ:");
		scanf("%s", pd->data[pos].addr);

		printf("�޸ĳɹ�\n");
	}
}

//����������
void CmpByName(const void* e1,const void* e2)
{
	assert(e1);
	assert(e2);
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

//����ϵ������
void SortDir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("�绰��Ϊ��\n");
		return;
	}
	qsort(pd->data, pd->count, sizeof(PeoInfo), CmpByName);
	printf("�������\n");

}