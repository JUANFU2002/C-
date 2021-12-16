#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    while (~scanf("%f %f %f", &a, &b, &c))
    {
        if (a != 0)
        {
            float d = b * b - 4 * a * c;
            if (d > 0.0)
            {
                printf("x1=%.2f;x2=%2.f\n", (-b - sqrt(d)) / (2 * a), (-b + sqrt(d)) / (2 * a));
            }
            else if (d < 0.0)
            {
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", (-b) / (2 * a), sqrt(-d) / (2 * a), (-b) / (2 * a), sqrt(-d) / (2 * a));
            }
            else
            {
                printf("x1=x2=%.2f\n", (-b) / (2 * a));
            }
        }
        else {
            printf("Not quadratic equation\n");
        }
        return 0;
}