#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//getchar putchar 字符的输出和输出
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch)
//	}
//
//
//
//
//	/*printf("%c\n", ch);
//	putchar(ch);*/
//	return 0;
//}
int main()
{
	char input[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", input);
	getchar();
	printf("请确认密码(Y/N)\n");
	int tmp;
	while ((tmp = getchar() != '\n'))
	{
		;
	}
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}
	return 0;
}