#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    int i = 0;
    int p = 0;
    scanf("%d %d", &n, &m);
    int arr[10][10] = { 0 };
    for (i = 0; i < n; i++)
    {
        for (p = 0; p < m; p++)
        {
            scanf("%d", &arr[i][p]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (p = 0; p < n; p++)
        {
            printf("%d ", arr[p][i]);
        }
        printf("\n");
    }
    return 0;
}