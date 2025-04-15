#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//编写代码实现:求一个整数存储在内存中的二进制中1的个数
//在内存中以补码形式存放
//求补码中1的个数
int main()
{
	int a = 0;
	int count = 0;
	int i = 0;
	scanf("%d", &a);

	while (i < 32)
	{
		if (1 == (a & 1))
		{
			count++;
		}
		a = a >> 1;
		i++;
	}

	printf("%d\n", count);

	return 0;
}