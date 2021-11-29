#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

void reverse(char* left, char* right)
{
	assert(left && right);

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);

	char *start = arr;
	char *end = start;
	int len = strlen(arr);
	while (*end != '\0')
	{
		while (*end != ' '&& *end!='\0')
		{
			end++;
		}
		reverse(start, end-1);
		if (*end == '\0')
		{
			start = end;
		}
		else
		{
			start = end + 1;
		}
		end = start;
	}
	reverse(arr, arr + len - 1);
	printf("%s\n", arr);
	return 0;
}