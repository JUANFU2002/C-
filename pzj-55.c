#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fun(int arr[],int sz)
{
	int tmp;
	int left = arr;
	int right = arr + sz - 1;
	tmp = left;
	left = right;
	right = tmp;

}
int check(int arr[],int sz)
{
	int i = 0;
	int l = arr;
	int r = arr + sz - 1;
	for (i = 0; i < sz - 1; i++)
	{
		if(arr[i])
	}

}
int main()
{
	int arr[100];
	int sz = sizeof(arr) / sizeof(arr[0]);
	gets(arr);
	check(arr, sz);
	fun(arr,sz);
	return 0;
}