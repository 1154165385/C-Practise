#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//假设一堆由1分、2分、5分组成的n个硬币总面值为m分，求一共有多少种可能的组合方式（某种面值的硬币可以数量可以为0）。
int main()
{
	for (;;)
	{
		int d = 0, e = 0, f = 0, g = 0, i = 0, o = 0;
		printf("总共面值为:\n");
		scanf("%d", &d);
		e = d / 5;
		printf("可能结果有：\n");
		for (i = 0; i <= e; i++)
		{
			f = (d - i * 5) / 2;
			for (o = 0; o <= f; o++)
			{
				g = d - i * 5 - o * 2;
				printf("共有1分硬币%2d枚，2分硬币%2d枚，5分硬币%2d枚\n", g, o, i);
			};
		};
		printf("请按回车键重复计算");
		if (getchar() != 'd')
			;
		if (getchar() != 'd')
			;
		system("cls");
	};

};