#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1矩阵倒置
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

//2编写函数
/*int main()
{
	int x, y;
	printf("请输入：x");
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

//3求Π的近似值
/*#include<math.h>
int main()
{
	int s = 1;//用来改变分数正负
	double n = 1.0;//分母
	double t = 1;//分数结果
	double pi = 0;//Π
	while (fabs(t) >= 1e-6)
	//fabs求绝对值,1e-6为1*10的-6次方
	{
		pi += t;
		n += 2;
		s = -s;
		t = s / n;
	}
	printf("pi=%.7lf\n", 4*pi);
	return 0;
}*/

//4统计字符
/*
int main()
{
	char c = 0;
	int a = 0;
	int b = 0;
	int d = 0;
	int e = 0;
	printf("输入一串字符:");
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
	printf("字母数:%d\n空格数:%d\n数字数:%d\n其它字符数:%d\n",a,b,d,e);
	return 0;
}*/

//5判断素数

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
	printf("输入一个数：");
	scanf("%d", &n);
	if (prime(n))
	{
		printf("%d 是一个素数", n);
	}
	else
	{
		printf("%d 不是一个素数", n);

	}
	return 0;

}