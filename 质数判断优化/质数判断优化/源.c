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
		printf("��������Ҫ�ж���������������\n");
		int sr = 0;
		scanf("%d", &sr);
		ss(sr) == 0 ? printf("����\n") : printf("����\n");
		printf("�ٴλس����¼���");
		if (getchar() == '\n');
		if (getchar() == '\n');
		system("cls");
	};
};