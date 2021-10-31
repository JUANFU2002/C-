#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr[] = "hellow world";
//	memset(arr, 'x', 5);//memset函数代替字符
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	size_t len = strlen(arr);//求字符串长度
//	printf("%u\n", len);
//
//	return 0;
//}
//int get_max(int x, int y)
//{
//	int z = 0;
//	z = (x > y ? x : y);//三目操作符
//	return z;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数：\n");
//	scanf("%d %d", &a, &b);
//	int m=get_max(a, b);
//	printf("较大的数是：%d\n", m);
//	return 0;
//}

//void menu()
//{
//	printf("***********************");
//}
//int main()
//{
//	menu();
//	return 0;
//}
void Swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个想要交换的数：");
	scanf("%d %d",&a,&b);
	Swap(&a, &b);
	printf("a=%d\n", a);
	
	printf("b=%d", b);


	return 0;
}