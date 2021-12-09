#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    int p = 0;
    int str[50] = { 0 }; 
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &str[i]);
    }
    scanf("%d", &p);
    for (i = 0; i < n; i++)
    {
        if (str[i] != p)
            printf("%d ", str[i]);
    }
    return 0;
}