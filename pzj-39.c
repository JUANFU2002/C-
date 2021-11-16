#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;//四个字节
	int* p = &a;//取地址
	*p = 20;//*解引用操作符
	printf("a=%d\n", a);
	return 0;
}