#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>

//有一个长度为n(n<=100)的数列，该数列定义为从2开始的递增有序偶数，现在要求你按照顺序每m个数求出一个平均值，
//如果最后不足m个，则以实际数量求平均值。编程输出该平均值序列。

int main()
{
	for (;;)
	{
		int n = 0, m = 0, p = 0, i = 0, q = 0, s = 0, j = 0, o = 0, r = 0;
		printf("数列的长度为：\n");
		scanf("%d", &n);
		printf("单次平均值的长度为：\n");
		scanf("%d", &m);
		p = n / m;
		q = n % m;
		printf("所得平均数为：");
		for (i = 0; i < p; i++)
		{
			s = i * m * 2 + 2;
			j = (s * m + m * m - m) / m;
			printf("%d ", j);
		};
		if (q != 0)
		{
			r = (2 * p * m + 2 + q - 1) / q;
			printf("%d", r);
		};;
			printf("\n\n如需重复计算，请按回车键\n");
		if (getchar() != 'q')
			;
		if (getchar() != 'q')
			;
		system("cls");
	};
};