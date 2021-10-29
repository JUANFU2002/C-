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
{//猜数字游戏的过程,生成随机数 （rand 函数）
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("猜数字：");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n\n");
		}
		else
		{
			printf("恭喜你猜对了！\n\n");
		}

	}

}
int main()
{//打印菜单 
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
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
			printf("输入错误，请重新输入！");
			break;
		}
	} while (input);

	return 0;
}
