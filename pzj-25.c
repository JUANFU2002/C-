#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//第一种输入字符串求长度
int main()
{
	char arr[20] = "";
	scanf("%s", arr);
	//arr是数组名，是首元素的地址, char*
	int len = strlen(arr);
	printf("%d", len);
	return 0;
}

//第二种自定义函数
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0');
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//	char arr1[] = "abc";
//	int len= my_strlen(arr1);
//	printf("%d", len);
//	return 0;
//}
