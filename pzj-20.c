#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr[] = "hellow world";
//	memset(arr, 'x', 5);//memset���������ַ�
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	size_t len = strlen(arr);//���ַ�������
//	printf("%u\n", len);
//
//	return 0;
//}
//int get_max(int x, int y)
//{
//	int z = 0;
//	z = (x > y ? x : y);//��Ŀ������
//	return z;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("����������������\n");
//	scanf("%d %d", &a, &b);
//	int m=get_max(a, b);
//	printf("�ϴ�����ǣ�%d\n", m);
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
	printf("������������Ҫ����������");
	scanf("%d %d",&a,&b);
	Swap(&a, &b);
	printf("a=%d\n", a);
	
	printf("b=%d", b);


	return 0;
}