#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	if (strlen(str2) - strlen(str1) > 0)//strlen返回值是无符号整型，得到的结果只可能是正数
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}

//模拟实现strlen
//#include <assert.h>
//
//int my_strlen(const char* p)
//{
//	assert(p);
//	if (*p != '\0')
//		return my_strlen(p + 1) + 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	char ch[] = "abcdef";
//	
//	printf("%d", my_strlen(ch));
//
//	return 0;
//}


//模拟实现strcpy
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* p = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return p;
//}
//
//int main()
//{
//	char ch[20] = { 0 };
//	printf("%s", my_strcpy(ch, "abcdef"));
//
//	return 0;
//}

//模拟实现strcat,字符串追加
//不能自己给自己追加
//#include <assert.h>
//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//
//	char* p = dest;
//
//	while (*dest)
//	{
//		dest++;
//	}
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return p;
//}
//
//int main()
//{
//	char ch[20] = "hello ";
//	printf("%s\n", my_strcat(ch, "world"));
//
//	return 0;
//}

//模拟实现strcmp
//#include <assert.h>
//
//int my_strcmp(const char* ch1, const char* ch2)
//{
//	assert(ch1);
//	assert(ch2);
//
//	while (*ch1 || *ch2)
//	{
//		//if (*ch1 > *ch2)
//		//	return 1;
//		//else if (*ch1 < *ch2)
//		//	return -1;
//		if (*ch1 != *ch2)
//			return *ch1 - *ch2;
//		ch1++;
//		ch2++;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	char ch1[] = "abc";
//	char ch2[] = "ab";
//
//	printf("%d\n", my_strcmp(ch1, ch2));
//
//	return 0;
//}

//strncpy

//#include <string.h>
//
//int main()
//{
//	char ch1[20] = "abcdefghijklmn";
//	char ch2[] = "hello";
//
//	printf("%s\n", strncpy(ch1, ch2, 3));
//
//	return 0;
//}

//模拟实现strncpy
//#include <assert.h>
//
//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	assert(dest);
//	assert(src);
//
//	char* p = dest;
//
//	while (num && (*dest++ = *src++))
//	{
//		num--;
//	}
//
//	if (num)
//	{
//		while (--num)
//			*dest++ = '\0';
//	}
//
//	return p;
//}
//
//int main()
//{
//	char ch1[20] = "*******************";
//	char ch2[] = "abc";
//
//	printf("%s", my_strncpy(ch1, ch2, 5));
//
//	return 0;
//}

//模拟实现strncat
//#include <assert.h>
//
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	assert(dest);
//	assert(src);
//
//	char* p = dest;
//
//	while (*dest++)
//	{
//		;
//	}
//	dest--;
//	
//	while (num--)
//	{
//		if ((*dest++ = *src++) == '\0')
//			return p;
//	}
//
//	*dest = '\0';
//
//	return p;
//}
//
//int main()
//{
//	char ch1[20] = "hello ";
//	char ch2[] = "world";
//
//	printf("%s\n", my_strncat(ch1, ch2, 3));
//
//	return 0;
//}

/* strncmp example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++)
//		if (strncmp(str[n], "R2xx", 2) == 0)
//		{
//			printf("found %s\n", str[n]);
//		}
//	return 0;
//}

//模拟实现strncmp
//#include <assert.h>
//
//char* strncmp(const char* ch1, const char* ch2, size_t num)
//{
//	assert(ch1);
//	assert(ch2);
//
//	while (num--)
//	{
//		if (*ch1 != *ch2)
//			return *ch1 - *ch2;
//		ch1++;
//		ch2++;
//	}
//
//	return 0;
//}
//int main()
//{
//	char ch1[20] = "zhangsan";
//	char ch2[] = "zhangsanfeng";
//
//	printf("%d\n", strncmp(ch1, ch2, 9));
//
//	return 0;
//}

//strstr 查找子串的一个函数

/* strstr example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	puts(pch);
//	return 0;
//}

//模拟实现strstr
//#include <assert.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char ch1[] = "abcdef";
//	char ch2[] = "bcd";
//
//	printf("%s\n", my_strstr(ch1, ch2));
//
//	return 0;
//}

//strtok 切割字符串

/* strtok example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "- This, a sample string.";
//	char* pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}

//x86
//#include <stdio.h>
//int main()
//{
//	char* p = "zhangpengwei@bitedu.tech";
//	const char* sep = ".@";
//	char arr[30];
//	char* str = NULL;
//	strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//}

/* strerror example : error list */
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>//必须包含的头文件
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("unexist.ent", "r");
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	//errno: Last error number
//	return 0;
//}

/* isupper example */
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//			c = tolower(c);
//		putchar(c);
//		i++;
//	}
//	return 0
//}

/* memcpy example */
#include <stdio.h>
#include <string.h>
struct {
	char name[40];
	int age;
} person, person_copy;
int main()
{
	char myname[] = "Pierre de Fermat";
	/* using memcpy to copy string: */
	memcpy(person.name, myname, strlen(myname) + 1);
	person.age = 46;
	/* using memcpy to copy structure: */
	memcpy(&person_copy, &person, sizeof(person));
	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
	return 0;
}