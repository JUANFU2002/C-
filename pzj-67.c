#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1������
/*int main()
{
	int j, k, x;
	int a[3][3] = { 9,7,5,3,1,2,4,6,8 };
	for (j = 0; j < 3; j++)
	{
		for (k = j + 1; k < 3; k++)
		{
			x = a[j][k];
			a[j][k] = a[k][j];
			a[k][j] = x;
		}
	}
	for (j = 0; j < 3; j++)
	{
		for (k = 0; k < 3; k++)
		{
			printf("%d ", a[j][k]);
		}
		printf("\n");
	}
	return 0;
}*/

//2��д����
/*int main()
{
	int x, y;
	printf("�����룺x");
	scanf("%d", &x);
	if (x < 1)
	{
		y = x;
		printf("x=%3d,y=%d\n", x, y);

	}
	else if(x<10)
	{
		y = 2 * x - 1;
		printf("x=%d,y=2*x-1=%d\n", x, y);
	}
	else
	{
		y = 3 * x - 11;
		printf("%d,y=3*x-11=%d\n", x, y);
	}
	return 0;
}*/

//3�󦰵Ľ���ֵ
/*#include<math.h>
int main()
{
	int s = 1;//�����ı��������
	double n = 1.0;//��ĸ
	double t = 1;//�������
	double pi = 0;//��
	while (fabs(t) >= 1e-6)
	//fabs�����ֵ,1e-6Ϊ1*10��-6�η�
	{
		pi += t;
		n += 2;
		s = -s;
		t = s / n;
	}
	printf("pi=%.7lf\n", 4*pi);
	return 0;
}*/

//4ͳ���ַ�
/*
int main()
{
	char c = 0;
	int a = 0;
	int b = 0;
	int d = 0;
	int e = 0;
	printf("����һ���ַ�:");
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			a++;

		}
		else if (c == ' ')
		{
			b++;
		}
		else if (c >= '0'&&c <= '9')
		{
			d++;
		}
		else
		{
			e++;
		}
	}
	printf("��ĸ��:%d\n�ո���:%d\n������:%d\n�����ַ���:%d\n",a,b,d,e);
	return 0;
}*/

//5�ж�����

int prime(int n)
{
	int flag = 1;
	int i = 0;
	for (i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			
		}
	}
	return flag;
}
int main()
{
	int prime(n);
	int n = 0;
	printf("����һ������");
	scanf("%d", &n);
	if (prime(n))
	{
		printf("%d ��һ������", n);
	}
	else
	{
		printf("%d ����һ������", n);

	}
	return 0;

}