#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("********************************\n");
	printf("*****  1.play   0.exit   *******\n");
	printf("********************************\n\n");
}
void game()
{//��������Ϸ�Ĺ���,��������� ��rand ������
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("�����֣�");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n\n");
		}
		else
		{
			printf("��ϲ��¶��ˣ�\n\n");
		}

	}

}
int main()
{//��ӡ�˵� 
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			menu();
			break;
		default:
			printf("����������������룡");
			break;
		}
	} while (input);

	return 0;
}
