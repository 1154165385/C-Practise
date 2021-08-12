#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>

int fbnq(int x)
{
	int a = 1, b = 0, c = 1, i = 0;//1 1 2 3 5 8
	for (i = 1; i < x; i++)
	{
		c = a;
		a = a + b;
		b = c;
	};
	printf("该序数所对应的斐波那契数列值为：%d\n", a);
}

int main()
{
	int y;
	printf("请输入你想查询的斐波那契数列序数：\n");
	scanf("%d", &y);
	fbnq(y);
}