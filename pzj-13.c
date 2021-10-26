#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 100;
	for (i = 100; i < 200; i++)
		if (i % 2 != 0)
			printf("%d ", i);
	return 0;
}