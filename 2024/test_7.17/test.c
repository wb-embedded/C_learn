#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ð������
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;//����
////	return *(int*)e1 - *(int*)e2;//����
//}
//
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char temp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = temp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int(_cdecl* cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//			if (flag == 1)
//				break;
//		}
//	}
//}
//
//void test()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));             //  16
//	printf("%d\n", sizeof(a + 0));         //  4/8
//	printf("%d\n", sizeof(*a));            //  4
//	printf("%d\n", sizeof(a + 1));         //  4/8
//	printf("%d\n", sizeof(a[1]));          //  4
//	printf("%d\n", sizeof(&a));            //  4/8
//	printf("%d\n", sizeof(*&a));           //  16
//	printf("%d\n", sizeof(&a + 1));        //  4/8
//	printf("%d\n", sizeof(&a[0]));         //  4/8
//	printf("%d\n", sizeof(&a[0] + 1));     //  4/8
//
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));            //6
//	//printf("%d\n", sizeof(arr + 0));        //4/8
//	//printf("%d\n", sizeof(*arr));           //1
//	//printf("%d\n", sizeof(arr[1]));         //1
//	//printf("%d\n", sizeof(&arr));           //4/8
//	//printf("%d\n", sizeof(&arr + 1));       //4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));    //4/8
//
//	//printf("%d\n", sizeof(arr[1]+1));         //4 �ַ����������ٽ��м��㣬���Ϊ����
//
//	//printf("%d\n", strlen(arr));
//	//û�н�������������
//
//	//printf("%d\n", strlen(arr + 0));
//	//û�н�������������
//
//	//printf("%d\n", strlen(*arr));
//	//����Ӧ���ǵ�ַ���������ַ�����
//
//	//printf("%d\n", strlen(arr[1]));
//	//����Ӧ���ǵ�ַ���������ַ�����
//
//	//printf("%d\n", strlen(&arr));
//	//û�н�������������
//
//	//printf("%d\n", strlen(&arr + 1));
//	//û�н�������������
//
//	//printf("%d\n", strlen(&arr[0] + 1));
//	//û�н�������������
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));          //7 ʹ���ַ�����ʼ��ʱ����Ĭ�ϼ���\0��Ϊ��������
//	printf("%d\n", sizeof(arr + 0));      //4/8 ��ַ
//	printf("%d\n", sizeof(*arr));         //1
//	printf("%d\n", sizeof(arr[1]));       //1
//	printf("%d\n", sizeof(&arr));         //4/8 ��ַ
//	printf("%d\n", sizeof(&arr + 1));     //4/8 ��ַ
//	printf("%d\n", sizeof(&arr[0] + 1));  //4/8 ��ַ
//	printf("%d\n", strlen(arr));          //6
//	printf("%d\n", strlen(arr + 0));      //6
//	//printf("%d\n", strlen(*arr));         //����Ӧ��Ϊ��ַ
//	//printf("%d\n", strlen(arr[1]));       //����Ӧ��Ϊ��ַ
//	printf("%d\n", strlen(&arr));         //6
//	printf("%d\n", strlen(&arr + 1));     //���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));  //5
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));            //4/8
//	printf("%d\n", sizeof(p + 1));        //4/8
//	printf("%d\n", sizeof(*p));           //1
//	printf("%d\n", sizeof(p[0]));         //1
//	printf("%d\n", sizeof(&p));           //4/8
//	printf("%d\n", sizeof(&p + 1));       //4/8
//	printf("%d\n", sizeof(&p[0] + 1));    //4/8
//	printf("%d\n", strlen(p));            //6
//	printf("%d\n", strlen(p + 1));        //5
//	//printf("%d\n", strlen(*p));         //err
//	//printf("%d\n", strlen(p[0]));       //err
//	printf("%d\n", strlen(&p));           //���ֵ
//	printf("%d\n", strlen(&p + 1));       //���ֵ
//	printf("%d\n", strlen(&p[0] + 1));    //5
//
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	//48  ��������Ĵ�С
//	printf("%d\n", sizeof(a[0][0]));
//	//4   ��һ��Ԫ�صĴ�С
//	printf("%d\n", sizeof(a[0]));
//	//16  a[0]�ǵ�һ�е�һά�����������
//	printf("%d\n", sizeof(a[0] + 1));
//	//4/8 a[0]�ǵ�һ�е�һά�������������Ҳ��ָ���һ���������Ԫ�ص�ָ��
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	//4   *(a[0] + 1)=a[0][1]
//	printf("%d\n", sizeof(a + 1));
//	//4/8 a + 1Ϊָ��ڶ���������Ԫ�ص�ַ��ָ��
//	printf("%d\n", sizeof(*(a + 1)));
//	//16  *(a + 1)=a[1]
//	printf("%d\n", sizeof(&a[0] + 1));
//	//4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	//16  *(&a[0] + 1)=a[1]
//	printf("%d\n", sizeof(*a));
//	//16  *a=a[0]
//	printf("%d\n", sizeof(a[3]));
//	//16
//
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5
//	return 0;
//}

////���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�,x86����
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//                     1       3       5
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//1
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//p[4][2]=a[3][3] &a[3][3]-&a[4][2]=-4
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW
	return 0;
}