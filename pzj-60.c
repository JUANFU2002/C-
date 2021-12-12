#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void main()
//{
//	float salary;                  //工资
//	float   ratio;                   //税率
//	float   tax = 0;       //个人所得税
//	printf(“Input salary : ”);     //提示输入工资
//	scanf(“ % f”, &salary);      //输入
//	if (salary <= 3500)
//		ratio = 0;
//	else if (salary <= 5000)
//		ratio = (float)0.03;
//	else if (salary <= 8000)
//		ratio = (float)0.10;
//	else if (salary <= 12500)
//		ratio = (float)0.20;
//	else if (salary <= 38500)
//		ratio = (float)0.25;
//	else   ratio = (float)0.30;
//	tax = (salary - 3500) * ratio;        //计算个税
//	printf("tax= %.2f\n", tax);  //输出结果} 
//#include <stdio.h>
//	int main()
//	{
//		float s, w, h;        //变量定义
//		printf("请输入体重（千克）w=");
//		scanf("%f", &w);
//		printf("请输入身高（米）h=");
//		scanf("%f", &h);
//		s = w / (h * h);
//		if (s < 16)
//			printf("低体重");
//		else if (s <= 24)
//			printf("正常体重");
//		else if (s <= 30)
//			printf("超重体重");
//		else
//			printf("肥胖");
//		return 0;
//	}
int main()
{
	int a, b;
	printf("请输入两个数,求最大公约数：");
	scanf("%d %d", &a, &b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	printf("%d\n", a);



	return 0;
}
#include <stdio.h>
int main()
{
	double mile;
	int time;
	double price;
	scanf("%lf %d", &mile, &time);
	if (mile <= 3) { price = 10; }
	else if (mile <= 10) { price = 10 + (mile - 3) * 2; }
	else { price = 10 + (10 - 3) * 2 + (mile - 10) * 3; }
	price = time / 5 * 2 + price;
	printf("%.0f", price);
	return 0;
}
#include <stdio.h>
void main()
{
	float a, b;       //存放两个数的变量
	char ch;         //运算符变量
	float result;   //运算结果变量
	printf(“input an expression : ”);     //提示运算式
	scanf(“ % f % c % f”, &a, &ch, &b);         //输入运算式
	switch (ch)  //根据运算符来进行相关的运算
	{
	case  '+': printf(" %.2f\n", a + b); break;
	case  '-':  printf(" %.2f\n", a - b);  break;
	case  '*':  printf(" %.2f\n", a * b); break;
	case  '/':   if (b == 0) printf(“Division by zero!\n”);
			 else  printf(" %.2f\n", a / b); break;
	default:  printf("illegal arithmetic lable\n");
	}
}//非法的运算符
#include <stdio.h>
void main()
{
	float a, b;       //存放两个数的变量
	char ch;         //运算符变量
	float result;   //运算结果变量
	printf(“input an expression : ”);     //提示运算式
	scanf(“ % f % c % f”, &a, &ch, &b);         //输入运算式
	switch (ch)  //根据运算符来进行相关的运算
	{
	case  '+': printf(" %.2f\n", a + b); break;
	case  '-':  printf(" %.2f\n", a - b);  break;
	case  '*':  printf(" %.2f\n", a * b); break;
	case  '/':   if (b == 0) printf(“Division by zero!\n”);
			 else  printf(" %.2f\n", a / b); break;
	default:  printf("illegal arithmetic lable\n");
	}
}//非法的运算符

#include<math.h>
void main()
{
	float a, b, c, s, chang;
	scanf("%f%f%f", &a, &b, &c);
	if (a + b > c && a + c > b && c + b > a)
	{
		chang = (a + b + c) / 2;
		s = sqrt(chang * (chang - a) * (chang - b) * (chang - c));
		printf("%f", s);
		if (a == b || b == c || a == c)
		{

			printf("等腰三角行");
		}
		else  if (a == b && b == c && a == c)
		{
			printf("等边三角行");
		}
		else  if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
		{
			printf("直角三角行");
		}
		else
		{
			printf("一般三角形");
		}
	}
}
#include <stdio.h>
#include <math.h>
void main()
{
	int s = 1;
	double n = 1.0, t = 1, pi = 0;
	while (fabs(t) >= 1e-6)
	{
		pi += t;
		n += 2;
		s = -s;
		t = s / n;
	}
	printf(“pi = % .7lf\n”, 4 * pi);
}
#include  <stdlib.h>
#include  <stdio.h>
main()
{
	int  magic;  /*计算机"想"的数*/
	int  guess;    /*人猜的数*/
	magic = rand() % 100 + 1;   /*“想”一个[1，100]之间的数magic*/
	printf("Please guess a magic number:");
	scanf("%d", &guess);
	if (guess > magic) 	/*if—else —if多分支结构*/
		printf("Wrong! Too big!\n");
	else if (guess < magic)
		printf("Wrong! Too small!\n");
	else
	{
		printf("Right! \n");
		printf("The number is:%d \n", magic);
	}
}

main()
{
		int  counter = 0;/*记录人猜次数的计数器变量*/
	do {
	
			counter++;/*计数器变量加1*/
	} while (guess != magic);

		printf("counter=%d \n", counter);
}

#include <stdio.h>
void main()
{
	int  m, i;
	printf("input a number: “);
		scanf("%d", &m);

	for (i = 2; i <= m - 1; i++)
		if (m % i == 0)
			break; \\如果m不是素数则跳出循环
			if (i > m - 1)
				printf("number\ prime a is %dn“,m); 
			else
					printf(" not is %d  number\ prime an“,m); 
}

#include<stdio.h>
#define N 100
int main()
{
	int a[N];
	int i, j, k, n, m, temp = 0;
	printf("请输入数组长度和右移次数（用空格分隔）：\n");
	scanf("%d%d", &n, &m);
	i = 0;
	printf("请输入数组成员值：\n");
	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	for (j = 0; j < m; j++)//移动次数
	{
		temp = a[n - 1];   //保存最后一位数
		for (k = n - 1; k >= 0; k--)
		{
			a[k] = a[k - 1];    //向后移动
			if (k == 0)
			{
				a[k] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d ", a[i]);
	}
	return 0;
}

#include <stdio.h>
#define  NUM   10
void main()
{
	int a[NUM], i, j, t;
	printf("input %d numbers: \n", NUM);
	for (i = 0; i < NUM; i++)  //输入NUM个整数
		scanf("%d", &a[i]);
	for (i = 1; i < NUM; i++)       //趟数，共NUM-1趟
		for (j = 0; j < NUM - i; j++)  //实现一次冒泡操作
			if (a[j] > a[j + 1])   //交换a[j]和a[j+1]
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	//输出排好序的数据
	printf("the sorted numbers:\n");
	for (i = 0; i < NUM; i++)
		printf("%d ", a[i]);
}

程序代码：
#include "stdio.h"
#define N 100
main()
{
	int sno[N], i, j;  /*定义学号数组*/
	float grade[N][5] = { 0 };/*语文数学化学总分平均分二维数组*/
	char tag = 'y';
	for (i = 0; i < 100; i++)
	{
		printf("请输入NO%d学号：", i + 1);
		scanf("%d", &sno[i]);
		printf("请输入NO%d语文，数学，化学成绩：", i + 1);
		for (j = 0; j < 3; j++)
		{
			scanf("%f", &grade[i][j]);
			grade[i][3] += grade[i][j];     /*计算该生总分*/
		}
		grade[i][4] = grade[i][3] / 3.0;  /*计算该生均分*/
		printf("继续输入下一个学生吗（Y/N or y/n）？");
		scanf(" %c", &tag);
		if (tag == 'n' || tag == 'N') break;
	}
	printf("\n           99级计算机本科二班入学成绩表\n");
	printf("-----------------------------------------------------\n");
	printf("   学号语文数学化学总分均分\n");
	printf("-----------------------------------------------------\n");
	for (j = 0; j <= i; j++)
	{
		printf("%-12d%-8.1f%-8.1f%-8.1f%-8.1f%-8.1f\n",
			sno[j], grade[j][0], grade[j][1], grade[j][2], grade[j][3], grade[j][4]);
	}
	printf("-----------------------------------------------------\n");
}