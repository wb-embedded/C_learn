#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//回调函数

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入2个操作数:");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}

void menu()
{
	printf("*********************\n");
	printf("******* 1.Add *******\n");
	printf("******* 2.Sub *******\n");
	printf("******* 3.Mul *******\n");
	printf("******* 4.Div *******\n");
	printf("******* 0.exit ******\n");
	printf("*********************\n");

}

int main()
{
//	void (*signal(int, void(*)(int)))(int);
	int input = 0;

	do
	{
		menu();
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);

	return 0;
}