#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

void my_strcpy(char* dest, char* src)
{
	assert(dest!=NULL);
	assert(src != NULL);//╤оят

	while (*dest++ = *src++)
	{
		;
	}

}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hellow";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}