#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1��100���ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == (i % 10))
//			count++;
//		if (9 == (i / 10))
//			count++;
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}


//����1-1/2+1/3-1/4+...-1/100�ĺ�
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum += ((1.0 / i) * flag);
//		flag *= -1;
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}

//��ʮ�������е����ֵ
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	//����ʮ����
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//���Ƚϣ��ȳ�������
	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);

	return 0;
}