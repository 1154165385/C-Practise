#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<math.h>

int ss()
{
	int i, y, x;
	scanf("%d", &x);
	for (i = 2; i <= sqrt(x); i++)
	{
		y = x % i;
		if (y == 0)
		{
			printf("Ϊ����");
			return 1;
		};;
	};
	printf("Ϊ����");
	return 0;
};