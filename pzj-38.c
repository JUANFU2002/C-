#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char c1, c2;
	printf("请输入一个字母：");
	scanf("%c", &c1);
	c2 = (c1 >= 'A' && c1 <= 'Z') ? (c1 + 32) : c1;
		c2= c1+ 32;
	printf("大写字母%c转化为小写字母%c\n",c1,c2);
}