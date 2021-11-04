#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int a = 0;
	printf("请输入一个整数来顺序打印：");
	scanf("%d", &a);
	print(a);
	
	return 0;
	system("pause");
}