#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;//�ĸ��ֽ�
	int* p = &a;//ȡ��ַ
	*p = 20;//*�����ò�����
	printf("a=%d\n", a);
	return 0;
}