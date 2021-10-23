#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
   /* int a;
    int b;
    int c;
    int d;
    int e;
    scanf("%d %d %d %d %d", &a,&b, &c, &d, &e);
    float ave = (a + b + c + d + e) / 5.0;
    printf("%.1f", ave);
    return 0;*/
    int a;
    scanf("%d", &a);
    printf("%d%d%d%d", a % 1000 % 100 % 10, a % 1000 % 100 / 10, a % 1000 / 100,a/1000);
    return 0;
}
