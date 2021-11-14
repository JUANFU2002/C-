#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int fun(int a, int b)
{
	int count = 0;
	int c = a ^ b;
	while (c != 0)
	{
		if ((c & 1) == 1)
		{
			count++;
		}
		c = c >> 1;
	}
	return count;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int count = fun(a, b);
	printf("%d", count);

	return 0;
}