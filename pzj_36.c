#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char *s)
{
	int count = 0;
	while (*s != '\0')
	{
		count++;;
		s++;
	}
	return count;
}
void reverse_string(char arr[])
{
	int left = 0;
	int right = my_strlen(arr) - 1;

	while (left<right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left++; 
		right--;
	}
}

int main()
{
	char arr[] = "qwertyu";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}