#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//getchar putchar �ַ�����������
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
	printf("���������룺");
	scanf("%s", input);
	getchar();
	printf("��ȷ������(Y/N)\n");
	int tmp;
	while ((tmp = getchar() != '\n'))
	{
		;
	}
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȷ��ʧ��");
	}
	return 0;
}