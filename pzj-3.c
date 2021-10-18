#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a=0;
	for (a = 0; a < 2; a++)
		printf("    * *\n");
	for (a = 0; a < 3; a++)
		printf("************\n");
	for(a = 0; a < 2; a++)
		printf("   *   *\n");

	return 0;
}