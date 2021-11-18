#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int hun, ten, ind, n;
    printf("result is:");
    for (n = 1; n < 1000000; n++) 
    {
        hun = n / 100;
        ten = (n - hun * 100) / 10;
        ind = n % 10;
        if (n == hun * hun * hun + ten * ten * ten + ind * ind * ind) 
            printf("%d  ", n);
    }
    printf("\n");

    return 0;
}

//int print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

//void fun(char* str,int sz)
//{
//	char* left = str;
//	char* right = str + sz - 2;
//	while (left < right)
//	{
//		char tem = *left;
//		*left = *right;
//		*right = tem;
//		left++;
//		right--;
//	}
//	printf("%s", str);
//}
//int main()
//{
//	char str[] = "teacher";
//	int sz = sizeof(str) / sizeof(str[0]);
//	fun(str,sz);
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	int d = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	for (c = 0; c < b; c++)
//	{
//		d= d * 10 + a;
//		sum = sum + d;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//
//
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
