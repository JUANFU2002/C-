#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(int *arr,int sz)
//void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				//交换
			}
		}
	}
}
int main()
{
	int arr[10] = { 0,2,4,5,1,3,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//将大小算好提前传进去；
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}


	return 0;
}