#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;

	assert(dest != NULL);
	assert(src != NULL);

	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char ch1[20] = "xxxxxxxxxxxxxxxxxxxx";
	char ch2[] = "never give up";

	printf("%s\n", my_strcpy(ch1, ch2));

	return 0;
}