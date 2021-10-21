#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 15;
	int b = 57;
	int m = MAX(a, b);
	printf("MAX=%d", m);
	return  0;
}
int MAX(int x, int y)
{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}