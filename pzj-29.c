#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ݹ�ķ���
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
//	printf("%d �Ľ׳�Ϊ %d", n, p);
//	return 0;
//}
#include <stdio.h>

int factorial(int n)
{
	if (n == 1)  //�����ݹ��ж�����
	{
		return 1;
	}
	return n * factorial(n - 1); //�ݹ�����Լ�
}

int main()
{
	int n;

	printf("please input a number:\n");
	scanf("%d", &n);

	printf("result = %d\n", factorial(n));

	return 0;
}