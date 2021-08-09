#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int ss(int x)
{
	int i = 0, a = 0, b = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		(x % i == 0) ? (b = 1) : (b = 0);
		if (b == 1)
			break;
	};
	return b;
};

void main()
{
	for (;;)
	{
		printf("请输入需要判断质数合数的数：\n");
		int sr = 0;
		scanf("%d", &sr);
		ss(sr) == 0 ? printf("质数\n") : printf("合数\n");
		printf("再次回车重新计算");
		if (getchar() == '\n');
		if (getchar() == '\n');
		system("cls");
	};
};