#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��д����ʵ��:��һ�������洢���ڴ��еĶ�������1�ĸ���
//���ڴ����Բ�����ʽ���
//������1�ĸ���
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