#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��Сд��ĸת��
//int main()
//{
//	char ch = '0';
//
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			ch -= 32;
//		else if (ch >= 'A' && ch <= 'Z')
//			ch += 32;
//		putchar(ch);
//	}
//
//	return 0;
//}

//�ж������Ƿ�����ĸ
int main()
{
	char ch = '0';

	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
			printf("is an alphabet.\n");
		else if (ch >= 'a' && ch <= 'z')
			printf("is an alphabet.\n");
		else
			printf("is not an alphabet.\n");
		getchar();
	}

	return 0;
}