#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;//�����ӡ������
    int a = 0;//��
    int b = 0;//��
    while (~scanf("%d", &n))
    {
        for (a = 1; a <= n; a++)
        {
            for (b = 1; b <= n; b++)
            {
                if (a == b || b == 1 || a == n)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
	return 0;
}