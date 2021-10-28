#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	double sum1 = 0;
	double sum2 = 0;
	
	for (a = 1; a <= 100; a = a + 2)
	{
		sum1 = sum1 + 1.0 / a;
	}
	for (b = 2; b <= 100; b = b + 2)
	{
		sum2 = sum2 + 1.0 / b;
	}
	printf("%f", sum1 - sum2);
	

	return 0;
}