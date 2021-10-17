#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 3;
	int m = ++n;
	printf("%d %d\n", n, m);
	n = 3;
	m = n++;
	printf("%d %d", n, m);
	return 0;
}