#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>

int ss(int x)
{
	int i = 0, a = 0, b = 0;
	for (i = 2; i < x; i++)
	{
		(x % i == 0) ? (b = 1) : (b = 0);
		if(b==1)
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
		if (getchar() == 'a');
		if (getchar() == 'a');
		system("cls");
	};
};