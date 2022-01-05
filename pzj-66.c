#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//¾ØÕóµ¹ÖÃ
int main()
{
	int j, k, x;
	int a[3][3] = { 9,7,5,3,1,2,4,6,8 };
	for (j = 0; j < 3; j++)
	{
		for (k = j + 1; k < 3; k++)
		{
			x = a[j][k];
			a[j][k] = a[k][j];
			a[k][j] = x;
		}
	}
	for (j = 0; j < 3; j++)
	{
		for (k = 0; k < 3; k++)
		{
			printf("%d ", a[j][k]);
		}
	}
	return 0;
}
