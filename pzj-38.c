#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char c1, c2;
	printf("������һ����ĸ��");
	scanf("%c", &c1);
	c2 = (c1 >= 'A' && c1 <= 'Z') ? (c1 + 32) : c1;
		c2= c1+ 32;
	printf("��д��ĸ%cת��ΪСд��ĸ%c\n",c1,c2);
}