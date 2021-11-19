#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct S
//{
//	int arr[1000];
//	float f;
//	char ch[100];
//};
//
//void print(struct S tmp)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", tmp.arr[i]);
//	}
//	printf("\n");
//	printf("%f\n",tmp.f);
//	printf("%s\n",tmp.ch);
//
//}
//int main()
//{
//	struct S s = { {1,2,3,4,5,6,7,8,9,0},5.5f,"hello bit" };
//	print(s);
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
};

void print(struct Stu* ps)
{
	printf("name = %s age = %d\n", (*ps).name, (*ps).age);
	printf("name = %s age = %d\n", ps->name, ps->age);
}
int main()
{
	struct Stu s = { "zhangsan",20 };
	print(&s);
	return 0;
}