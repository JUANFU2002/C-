#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{

    int n = 0;
    int i = 0;
    int t = 0;
    scanf("%d", &n);
    for (i = 0; i < 1000000000; i++)
    {
        if (n <= 12)
        {
            t = t + 2;
            break;
        }
        else
        {
            t = t + 4;
            n = n - 12;
        }
    }
    printf("%d", t);
	return 0;
}