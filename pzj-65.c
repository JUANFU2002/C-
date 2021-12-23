#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int y = 0;
	while (~scanf("%d %d", &n, &y))
	{
		if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12)
		{
			y = 31;
		}
		else if(y==2)
		{
			y = 28;
			if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
			{
				y++;

			}
		}
		else
		{
			y = 30;
		}
		printf("%d\n", y);
	}


	return 0;
}