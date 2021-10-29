#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	char password[20] = { 0 };
	//假设密码是123456；
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登陆成功！");
			break;
		}
		else
		{
			printf("密码错误!\n");
		}
	}
	if (i == 3)
	{
		printf("退出程序\n");
	}
	return 0;
}