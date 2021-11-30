#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*int killer = 0;
//	for (killer = 'a'; killer < 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("凶手是:%c", killer);
//	}*/
//	return 0;
//}

void swapArgs(int* a, int* b) //交换函数
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
	void diveRank(int* p, int n)
	{
		if (n >= 5) //此时的n也是用来控制循环层数的。
		{
			if ((p[1] == 2) + (p[0] == 3) == 1 && //B第二，我第三
				(p[1] == 2) + (p[4] == 4) == 1 && //我第二，E第四
				(p[2] == 1) + (p[3] == 2) == 1 && //我第一，D第二
				(p[2] == 5) + (p[3] == 3) == 1 && //C最后，我第三
				(p[4] == 4) + (p[0] == 1) == 1)   //我第四，A第一
				//由于此时是执行的全排列，所以查重也省了。
			{
				for (int i = 0; i < 5; i++)
				{
					printf("%d ", p[i]);
				}
				putchar('\n');
			}
			return;
		}
		int i;
		for (i = n; i < 5; i++) 
		{
			swapArgs(p + i, p + n);
			diveRank(p, n + 1);
			swapArgs(p + i, p + n);
		}
	}

	int main()
	{
		int p[5] = { 1, 2, 3, 4, 5 }; //当然由于是全排列，所以初值必须给好。

		diveRank(p, 0);

		return 0;
	}