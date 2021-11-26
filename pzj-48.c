#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int ADD(int x, int y)
{
	int z = 0;
	z = x + y;

	return z;
}
int main()
{
	int a = 10;
	int b = 20;

	int c = ADD(a, b);
	printf("%d", c);
	return 0;
}