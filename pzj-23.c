#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int i = 1;
	printf("请输入一个数以打印乘法口诀表:");
	scanf("%d", &a);
	for (b = 1; b <=a; b++)
	{
		for (i = 1; i <= b; i++)
		{
			printf("%d * %d = %d   ", i, b, i*b);
		}
		printf("\n");
	}
	return 0;
}