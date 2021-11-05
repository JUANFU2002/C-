#include<stdio.h>
void move(char pos1,char pos2)
{
	printf("%c->%c  ",pos1,pos2);
}
//n代表    盘子个数
//pos1代表 起始位置 
//POS2代表 中转位置
//pos3代表 目的位置
 
void Hanoi(int n,char pos1,char pos2,char pos3)
{
	if(n==1)
	{
		move(pos1,pos3);
	} 
	else
	{
		Hanoi(n-1,pos1,pos3,pos2);
		move(pos1,pos3);
		Hanoi(n-1,pos2,pos1,pos3);
	}
}
int main()
{
	Hanoi(1,'A','B','C');
	printf("\n");
	Hanoi(2,'A','B','C');
	printf("\n");
	Hanoi(3,'A','B','C');

	
	return 0;
} 
