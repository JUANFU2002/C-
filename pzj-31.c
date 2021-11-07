#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char reverse_string(char* string)
{
	if ('\0' == *(string))
	{
		return 0;
	}
	else
	{
		reverse_string(++string);
		printf("%c", *(--string));
	}
}
int main()
{
	char* str = "abcdefg";
	printf("原始字符串是:%s \n", str);
	printf("反向字符串是:");
	reverse_string(str);
	return 0;
}