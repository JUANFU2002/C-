#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��һ�������ַ����󳤶�
int main()
{
	char arr[20] = "";
	scanf("%s", arr);
	//arr��������������Ԫ�صĵ�ַ, char*
	int len = strlen(arr);
	printf("%d", len);
	return 0;
}

//�ڶ����Զ��庯��
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
