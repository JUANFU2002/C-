#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 0 };
	int max = 0;
	int i = 0;
	printf("请输入10个整数：");
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	system("pause");

	return 0;
}