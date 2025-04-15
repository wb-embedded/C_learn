#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//冒泡排序
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;//降序
////	return *(int*)e1 - *(int*)e2;//升序
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
//	//printf("%d\n", sizeof(arr[1]+1));         //4 字符整型提升再进行计算，结果为整形
//
//	//printf("%d\n", strlen(arr));
//	//没有结束符，结果随机
//
//	//printf("%d\n", strlen(arr + 0));
//	//没有结束符，结果随机
//
//	//printf("%d\n", strlen(*arr));
//	//参数应该是地址，而不是字符变量
//
//	//printf("%d\n", strlen(arr[1]));
//	//参数应该是地址，而不是字符变量
//
//	//printf("%d\n", strlen(&arr));
//	//没有结束符，结果随机
//
//	//printf("%d\n", strlen(&arr + 1));
//	//没有结束符，结果随机
//
//	//printf("%d\n", strlen(&arr[0] + 1));
//	//没有结束符，结果随机
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));          //7 使用字符串初始化时，会默认加上\0作为结束符号
//	printf("%d\n", sizeof(arr + 0));      //4/8 地址
//	printf("%d\n", sizeof(*arr));         //1
//	printf("%d\n", sizeof(arr[1]));       //1
//	printf("%d\n", sizeof(&arr));         //4/8 地址
//	printf("%d\n", sizeof(&arr + 1));     //4/8 地址
//	printf("%d\n", sizeof(&arr[0] + 1));  //4/8 地址
//	printf("%d\n", strlen(arr));          //6
//	printf("%d\n", strlen(arr + 0));      //6
//	//printf("%d\n", strlen(*arr));         //参数应该为地址
//	//printf("%d\n", strlen(arr[1]));       //参数应该为地址
//	printf("%d\n", strlen(&arr));         //6
//	printf("%d\n", strlen(&arr + 1));     //随机值
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
//	printf("%d\n", strlen(&p));           //随机值
//	printf("%d\n", strlen(&p + 1));       //随机值
//	printf("%d\n", strlen(&p[0] + 1));    //5
//
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	//48  整个数组的大小
//	printf("%d\n", sizeof(a[0][0]));
//	//4   第一个元素的大小
//	printf("%d\n", sizeof(a[0]));
//	//16  a[0]是第一行的一维数组的数组名
//	printf("%d\n", sizeof(a[0] + 1));
//	//4/8 a[0]是第一行的一维数组的数组名，也是指向第一行数组的首元素的指针
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	//4   *(a[0] + 1)=a[0][1]
//	printf("%d\n", sizeof(a + 1));
//	//4/8 a + 1为指向第二行数组首元素地址的指针
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

////由于还没学习结构体，这里告知结构体的大小是20个字节,x86环境
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
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
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式
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