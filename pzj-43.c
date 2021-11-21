#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int j = 1;
	int i = 1;

	for (i = 1; i < 10; i++)
	{
		for (j = 9; j >=i;j--)
		
			printf("       ");

		
		for (j = 1; j <= i; j++)
		
			printf("%d * %d = %-3d ", j, i, i * j);
		
		puts(" ");
	}
	return 0;
}