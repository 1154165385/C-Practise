#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	for (;;)
	{
		int i = 1, a = 0, b = 0, c = 0, d = 1;
		printf("打印不大于它的所有素数\n");
		scanf_s("%d", &a);
		printf("素数有1  ");
		for (i = 2; i <= a; i++)
		{
			for (b = 2; b <= sqrt(i); b++)
			{
				i% b != 0 ? c = 0 : c++;
				if (c > 0)
					break;
			};
			if (c == 0)
			{
				printf("%d  ", i);
				d++;
			};;
		};
		printf("\n\n共有素数%d个", d);
		printf("\n\n按回车再次计算");

		if (getchar() != '/n')
			;
		if (getchar() != '/n')
			;
		system("cls");
	};
};