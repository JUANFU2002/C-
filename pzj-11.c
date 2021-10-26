#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a,b,c,m;
	scanf("%d %d %d", &a, &b, &c);
	if (b > a)
	{
		m = b, b = a, a = m;
	}
	if (c > a)
	{
		m = c, c = a, a = m;
	}
	if (c>b)
	{
		m = c, c = b, b = m;
	}
	printf("%d %d %d", a, b, c);

	return 0;
}