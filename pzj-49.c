#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int i = 1;
	while (i * a % b != 0)
	{
		i++;
	}
	printf("%d\n", i * a);
	return 0;
}