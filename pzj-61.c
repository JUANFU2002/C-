#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int q = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j<n-1-i; j++)
		{
			printf("  ");
		}
		for (q =0; q <=i; q++)
		{
			printf("* ");
		}

		printf("\n");
	}
	return 0;
}