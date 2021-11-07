#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
int my_strlen(char* s)
{
	if (*s == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(s + 1);
	}
}