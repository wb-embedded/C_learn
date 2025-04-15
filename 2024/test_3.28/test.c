#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0, a[12] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	while (i < 12)
//	{
//		printf("%c", a[i]);
//		i++;
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int year = 0, month = 0, date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	float C_language = 0.0, Math = 0.0, English = 0.0;
//	scanf("%d;%f,%f,%f", &num, &C_language, &Math, &English);
//	printf("The each subject score of No.%d is %.2f,%.2f,%.2f.\n", num, C_language, Math, English);
//
//
//	return 0;
//}

int main()
{
	int ret = printf("Hello world!");
	printf("\n%d\n", ret);

	return 0;
}