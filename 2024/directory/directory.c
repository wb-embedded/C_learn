#include "directory.h"

//��ʼ��
void InitDir(directory* pd)
{
	assert(pd);
	pd->count = 0;
	memset(pd->data, 0, sizeof(pd->data));
}

//������ϵ��
void Add_dir(directory* pd)
{
	assert(pd);
	if (pd->count == MAX)
	{
		printf("�绰������,������ռ���ٽ�����ӡ�\n");
		return;
	}
	printf("����������:");
	scanf("%s", pd->data[pd->count].name);
	printf("����������:");
	scanf("%d", &(pd->data[pd->count].age));
	printf("�������Ա�:");
	scanf("%s", pd->data[pd->count].sex);
	printf("������绰:");
	scanf("%s", pd->data[pd->count].tele);
	printf("�������ַ:");
	scanf("%s", pd->data[pd->count].addr);
	pd->count++;
	printf("����ɹ���\n");
}

//��ӡ��ϵ��
void Show_dir(const directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("�绰��Ϊ�ա�\n");
		return;
	}
	printf("%-20s\t%-5s\t%-10s\t%-20s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	int i = 0;
	while (i < pd->count)
	{
		printf("%-20s\t%-5d\t%-10s\t%-20s\t%-30s\n", 
			pd->data[i].name, 
			pd->data[i].age, 
			pd->data[i].sex, 
			pd->data[i].tele, 
			pd->data[i].addr);
		i++;
	}
}

//���� �ҵ������±꣬û�ҵ�����-1
static int Find_By_Name(const directory* pd, const char* name)
{
	assert(pd);
	int i = 0;
	for (i = 0; i < pd->count; i++)
	{
		if (strcmp(pd->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

//ɾ����ϵ��
void Del_dir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("�绰��Ϊ�ա�\n");
		return;
	}
	char name[20] = { 0 };
	printf("������Ҫɾ����ϵ�˵�����:");
	scanf("%s", name);
	int pos = Find_By_Name(pd, name);
	if (pos == -1)
	{
		printf("δ�ҵ���Ӧ��ϵ�ˡ�\n");
		return;
	}
	//ɾ����ϵ��
	else
	{
		while (pos < (pd->count - 1))
		{
			pd->data[pos] = pd->data[pos + 1];
			pos++;
		}
		pd->count--;
		printf("ɾ���ɹ���\n");
	}
}

//������ϵ��
void Search_dir(const directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("�绰��Ϊ�ա�\n");
		return;
	}
	char name[20] = { 0 };
	printf("������Ҫ������ϵ�˵�����:");
	scanf("%s", name);
	int pos = Find_By_Name(pd, name);
	if (pos == -1)
	{
		printf("δ�ҵ���Ӧ��ϵ�ˡ�\n");
		return;
	}
	//��ӡҪ�����˵���Ϣ
	else
	{
		printf("%-20s\t%-5s\t%-10s\t%-20s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-5d\t%-10s\t%-20s\t%-30s\n",
			pd->data[pos].name,
			pd->data[pos].age,
			pd->data[pos].sex,
			pd->data[pos].tele,
			pd->data[pos].addr);
	}
}

//�޸���ϵ����Ϣ
void Mod_dir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("�绰��Ϊ�ա�\n");
		return;
	}
	char name[20] = { 0 };
	printf("������Ҫ�޸���ϵ�˵�����:");
	scanf("%s", name);
	int pos = Find_By_Name(pd, name);
	if (pos == -1)
	{
		printf("δ�ҵ���Ӧ��ϵ�ˡ�\n");
		return;
	}
	//�޸���Ϣ
	else
	{
		printf("�������޸ĺ����ϵ����Ϣ:\n");
		printf("����������:");
		scanf("%s", pd->data[pos].name);
		printf("����������:");
		scanf("%d", &(pd->data[pos].age));
		printf("�������Ա�:");
		scanf("%s", pd->data[pos].sex);
		printf("������绰:");
		scanf("%s", pd->data[pos].tele);
		printf("�������ַ:");
		scanf("%s", pd->data[pos].addr);
		printf("�޸ĳɹ���\n");
	}
}

//�ȽϺ���
int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
	//return *(char*)e1 - *(char*)e2;
}

//����ϵ����Ϣ����
void Sort_dir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("�绰��Ϊ�ա�\n");
		return;
	}
	qsort(pd->data, pd->count, sizeof(PeoInfo), cmp_by_name);
	printf("������ɡ�\n");
}