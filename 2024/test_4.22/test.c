#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//
//	return 0;
//}


//关机
//#include<windows.h>
//#include<string.h>
//
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 60");//关机指令
//	printf("电脑将在60s后关机，请输入取消以正常使用:\n");
//
//again:
//	scanf("%s", input);
//	if (0 == strcmp(input, "取消"))
//		system("shutdown -a");//取消关机指令
//	else
//	{
//		printf("输入错误，请重新输入...\n");
//		goto again;
//	}
//
//	return 0;
//}


//计算最大值函数
//int max(int m, int n)
//{
//	return (m > n ? m : n);
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", max(a, b));
//
//	return 0;
//}


//交换数值函数
void exchange(int* p1, int* p2)
{
	int n = 0;
	n = *p1;
	*p1 = *p2;
	*p2 = n;

}

int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	exchange(&a, &b);
	printf("%d %d\n", a, b);

	return 0;
}

