#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a;
    while (scanf("%d\n", &a))
    {
        if (a % 5 == 0)
            printf("YES\n");
        else if (a % 5 != 0)
            printf("NO\n");
    }
    return 0;
}