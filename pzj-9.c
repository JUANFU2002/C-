#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
////int main()
//{
	//int a = 10;
	//int* p = ("%p\n", &a);
	//*p = 20;
	//printf("%d\n", a);
//}
struct stu
{
	char name[20];
	int age;
	char sex[10];
};
int main()
{
	struct stu zhangsan = { "����",30,"��" };
	struct stu lisi = { "����",20,"Ů" };
	struct stu* pl = &lisi;
	printf("%s %d %s\n", (*pl).name, (*pl).age, (*pl).sex);
	printf("%s %d %s\n",pl->name,pl->age,pl->sex);
	return 0;
}