#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	char password[20] = { 0 };
	//����������123456��
	for (i = 0; i < 3; i++)
	{
		printf("���������룺\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ���");
			break;
		}
		else
		{
			printf("�������!\n");
		}
	}
	if (i == 3)
	{
		printf("�˳�����\n");
	}
	return 0;
}