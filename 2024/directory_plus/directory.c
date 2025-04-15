#include "directory.h"

//初始化
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

//载入已有联系人信息
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
	//二进制读取信息
	//while (fread(&temp, sizeof(PeoInfo), 1, pfread))
	//{
	//	CheckCapacity(pd);
	//	pd->data[pd->count] = temp;
	//	pd->count++;
	//}
	//读取文本信息
	while (fscanf(pfread, "%s %d %s %s %s\n", temp.name, &(temp.age), temp.sex, temp.tele, temp.addr) != EOF)
	{
		CheckCapacity(pd);
		pd->data[pd->count] = temp;
		pd->count++;
	}

	fclose(pfread);
	pfread = NULL;
}

//保存联系人信息到文件
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
		//二进制写入
		//fwrite(pd->data+i,sizeof(PeoInfo),1,pfwrite);
		//按文本写入
		fprintf(pfwrite, "%s %d %s %s %s\n", pd->data[i].name, pd->data[i].age, pd->data[i].sex, pd->data[i].tele, pd->data[i].addr);
	}

	fclose(pfwrite);
	pfwrite = NULL;
}

//释放开辟的内存
void DestroyDir(directory* pd)
{
	assert(pd);
	free(pd->data);
	pd->data = NULL;
	pd->count = 0;
	pd->capacity = 0;
}

//检查容量
void CheckCapacity(directory* pd)
{
	if (pd->count == pd->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pd->data, (pd->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pd->data = ptr;
			pd->capacity += INC_SZ;
			printf("已扩容\n");
		}
		else
		{
			perror("AddDir");
			printf("增加联系人失败\n");
			return;
		}
	}
}

//增加联系人
void AddDir(directory* pd)
{
	assert(pd);
	CheckCapacity(pd);
	printf("请输入姓名:");
	scanf("%s", pd->data[pd->count].name);
	printf("请输入年龄:");
	scanf("%d", &(pd->data[pd->count].age));
	printf("请输入性别:");
	scanf("%s", &(pd->data[pd->count].sex));
	printf("请输入电话:");
	scanf("%s", pd->data[pd->count].tele);
	printf("请输入地址:");
	scanf("%s", pd->data[pd->count].addr);

	pd->count++;
	printf("增加成功\n");
}

//显示电话簿
void ShowDir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("电话簿为空\n");
		return;
	}
	//打印信息目录
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	int i = 0;
	for (i = 0; i < pd->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pd->data[i].name, pd->data[i].age, pd->data[i].sex, pd->data[i].tele, pd->data[i].addr);
	}
}

//通过姓名查找
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

//删除联系人
void DelDir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("电话簿为空\n");
		return;
	}
	char name[MAX_NAME];
	printf("请输入要删除联系人的姓名:");
	scanf("%s", name);
	int pos = FindByName(pd, name);
	if (pos == -1)
	{
		printf("联系人不存在\n");
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
		printf("删除成功\n");
	}
}

//查找联系人
void SearchDir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("电话簿为空\n");
		return;
	}
	char name[MAX_NAME];
	printf("请输入要查找联系人的姓名:");
	scanf("%s", name);
	int pos = FindByName(pd, name);
	if (pos == -1)
	{
		printf("联系人不存在\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pd->data[pos].name, pd->data[pos].age, pd->data[pos].sex, pd->data[pos].tele, pd->data[pos].addr);
	}
}

//修改联系人信息
void ModifyDir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("电话簿为空\n");
		return;
	}
	char name[MAX_NAME];
	printf("请输入要修改联系人的姓名:");
	scanf("%s", name);
	int pos = FindByName(pd, name);
	if (pos == -1)
	{
		printf("联系人不存在\n");
		return;
	}
	else
	{
		printf("请输入姓名:");
		scanf("%s", pd->data[pos].name);
		printf("请输入年龄:");
		scanf("%d", &(pd->data[pos].age));
		printf("请输入性别:");
		scanf("%s", &(pd->data[pos].sex));
		printf("请输入电话:");
		scanf("%s", pd->data[pos].tele);
		printf("请输入地址:");
		scanf("%s", pd->data[pos].addr);

		printf("修改成功\n");
	}
}

//按名字排序
void CmpByName(const void* e1,const void* e2)
{
	assert(e1);
	assert(e2);
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

//对联系人排序
void SortDir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("电话簿为空\n");
		return;
	}
	qsort(pd->data, pd->count, sizeof(PeoInfo), CmpByName);
	printf("排序完成\n");

}