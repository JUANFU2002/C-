#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void Printbit(int num)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个数： ");
//	scanf("%d", &num);
//	Printbit(num);
//	return 0;
//}

//int fun(int a)
//{
//	
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=fun(a);
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//    int a = 10;
//    int b = 20;
//    printf("交换前:a = %d b = %d\n", a, b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("交换后:a = %d b = %d\n", a, b);
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int num = 0;
//    while (scanf("%d", &num) != EOF)
//    {
//        if (num % 2 == 1)
//            printf("Odd\n");
//        else
//            printf("Even\n");
//    }
//    return 0;
//}
#include <stdio.h>
int main() {
    char ch;
    while (scanf("%c", &ch) != EOF)
    {
        getchar();
        if (ch == 'a' || ch == 'A' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u') {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
    return 0;
}