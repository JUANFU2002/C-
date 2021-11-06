#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//不递归的方法
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int p = 1;
//	scanf("%d", &n);
//	for (a = 1; a < n+1; a++)
//	{
//		p = p * a;
//		
//	}
//	printf("%d 的阶乘为 %d", n, p);
//	return 0;
//}
#include <stdio.h>

int factorial(int n)
{
	if (n == 1)  //结束递归判断条件
	{
		return 1;
	}
	return n * factorial(n - 1); //递归调用自己
}

int main()
{
	int n;

	printf("please input a number:\n");
	scanf("%d", &n);

	printf("result = %d\n", factorial(n));

	return 0;
}