#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int n)
{
	int date[30][30] = { 1 };
	int i, j;
	for (i = 1; i < n; i++)
	{
		date[i][0] = 1;
		for (j = 1; j <= i; j++)
		{
			date[i][j] = date[i - 1][j] + date[i - 1][j - 1];

		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d", date[i][j]);
		}
		putchar('\n');
	}
}
int main()
{
	int n = 5;
	print(n);
	return 0;
}

//1
//11
//121
//1331
//14641


//计算每行的个数
//计算上一行相邻两个数的和
//将和打印到下一行