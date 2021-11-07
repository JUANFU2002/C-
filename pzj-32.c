#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int DigitSum(num)
{
	if (num>0)
	{
		return num % 10 + DigitSum(num / 10);
	}
	return 0;
	
}
int main()
{
	int num = 1729;
	int i = 0;
	printf("1729的每位之和为:%d\n", DigitSum(num));
	return 0;
}