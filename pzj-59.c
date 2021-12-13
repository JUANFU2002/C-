#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    float arr[7] = { 0 };
    int i = 0;
    float tmp = 100;
    float re = 0;
    float n = 0;
    int j = 0;
    while (i < 7)
    {
        scanf("%f", &n);
        arr[i] = n;
        i++;
    }
    for (j = 0; j < 6; j++)
    {
        for (i = 0; i < 6; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }

    for (i = 1; i < 6; i++)
    {
        re = re + arr[i];
    }
    printf("%.2f", re / 5);
    return 0;
}