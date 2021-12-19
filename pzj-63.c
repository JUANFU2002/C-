#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct S
{
	int arr[1000];
	float f;
	char ch[100];
};

void print(struct S tmp)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", tmp.arr[i]);

	}
	printf("\n");
	printf("%f\n", tmp.f);
	printf("%s\n", tmp.ch);
}
int main()
{
	struct S s = { {1,2,3,4,5,6,7,8,9,10},5.5f,"hello bit" };
	print(s);
	
	return 0;
}