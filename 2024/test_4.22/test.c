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


//�ػ�
//#include<windows.h>
//#include<string.h>
//
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 60");//�ػ�ָ��
//	printf("���Խ���60s��ػ���������ȡ��������ʹ��:\n");
//
//again:
//	scanf("%s", input);
//	if (0 == strcmp(input, "ȡ��"))
//		system("shutdown -a");//ȡ���ػ�ָ��
//	else
//	{
//		printf("�����������������...\n");
//		goto again;
//	}
//
//	return 0;
//}


//�������ֵ����
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


//������ֵ����
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

