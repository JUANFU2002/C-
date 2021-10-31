#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_leep_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leep_year(y) == 1)
		{
			printf("%d\n", y);
		}
	}
return 0;
}