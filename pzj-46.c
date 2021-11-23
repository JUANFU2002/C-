#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int money = 20;
	int a = 0;
	int b = 0;
	a = money;
	b = money;
	while (b > 1)
	{
		a = a + b / 2;
		b = b / 2 + b % 2;
	}
	printf("%d", a);
	
	return 0;
}