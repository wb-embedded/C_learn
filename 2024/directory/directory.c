#include "directory.h"

//初始化
void InitDir(directory* pd)
{
	assert(pd);
	pd->count = 0;
	memset(pd->data, 0, sizeof(pd->data));
}

//增加联系人
void Add_dir(directory* pd)
{
	assert(pd);
	if (pd->count == MAX)
	{
		printf("电话簿已满,请清理空间后再进行添加。\n");
		return;
	}
	printf("请输入姓名:");
	scanf("%s", pd->data[pd->count].name);
	printf("请输入年龄:");
	scanf("%d", &(pd->data[pd->count].age));
	printf("请输入性别:");
	scanf("%s", pd->data[pd->count].sex);
	printf("请输入电话:");
	scanf("%s", pd->data[pd->count].tele);
	printf("请输入地址:");
	scanf("%s", pd->data[pd->count].addr);
	pd->count++;
	printf("输入成功。\n");
}

//打印联系人
void Show_dir(const directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("电话簿为空。\n");
		return;
	}
	printf("%-20s\t%-5s\t%-10s\t%-20s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
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

//查找 找到返回下标，没找到返回-1
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

//删除联系人
void Del_dir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("电话簿为空。\n");
		return;
	}
	char name[20] = { 0 };
	printf("请输入要删除联系人的姓名:");
	scanf("%s", name);
	int pos = Find_By_Name(pd, name);
	if (pos == -1)
	{
		printf("未找到相应联系人。\n");
		return;
	}
	//删除联系人
	else
	{
		while (pos < (pd->count - 1))
		{
			pd->data[pos] = pd->data[pos + 1];
			pos++;
		}
		pd->count--;
		printf("删除成功。\n");
	}
}

//查找联系人
void Search_dir(const directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("电话簿为空。\n");
		return;
	}
	char name[20] = { 0 };
	printf("请输入要查找联系人的姓名:");
	scanf("%s", name);
	int pos = Find_By_Name(pd, name);
	if (pos == -1)
	{
		printf("未找到相应联系人。\n");
		return;
	}
	//打印要查找人的信息
	else
	{
		printf("%-20s\t%-5s\t%-10s\t%-20s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-5d\t%-10s\t%-20s\t%-30s\n",
			pd->data[pos].name,
			pd->data[pos].age,
			pd->data[pos].sex,
			pd->data[pos].tele,
			pd->data[pos].addr);
	}
}

//修改联系人信息
void Mod_dir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("电话簿为空。\n");
		return;
	}
	char name[20] = { 0 };
	printf("请输入要修改联系人的姓名:");
	scanf("%s", name);
	int pos = Find_By_Name(pd, name);
	if (pos == -1)
	{
		printf("未找到相应联系人。\n");
		return;
	}
	//修改信息
	else
	{
		printf("请输入修改后的联系人信息:\n");
		printf("请输入姓名:");
		scanf("%s", pd->data[pos].name);
		printf("请输入年龄:");
		scanf("%d", &(pd->data[pos].age));
		printf("请输入性别:");
		scanf("%s", pd->data[pos].sex);
		printf("请输入电话:");
		scanf("%s", pd->data[pos].tele);
		printf("请输入地址:");
		scanf("%s", pd->data[pos].addr);
		printf("修改成功。\n");
	}
}

//比较函数
int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
	//return *(char*)e1 - *(char*)e2;
}

//对联系人信息排序
void Sort_dir(directory* pd)
{
	assert(pd);
	if (pd->count == 0)
	{
		printf("电话簿为空。\n");
		return;
	}
	qsort(pd->data, pd->count, sizeof(PeoInfo), cmp_by_name);
	printf("排序完成。\n");
}