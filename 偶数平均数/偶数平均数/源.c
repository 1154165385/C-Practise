#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>

//��һ������Ϊn(n<=100)�����У������ж���Ϊ��2��ʼ�ĵ�������ż��������Ҫ���㰴��˳��ÿm�������һ��ƽ��ֵ��
//��������m��������ʵ��������ƽ��ֵ����������ƽ��ֵ���С�

int main()
{
	for (;;)
	{
		int n = 0, m = 0, p = 0, i = 0, q = 0, s = 0, j = 0, o = 0, r = 0;
		printf("���еĳ���Ϊ��\n");
		scanf("%d", &n);
		printf("����ƽ��ֵ�ĳ���Ϊ��\n");
		scanf("%d", &m);
		p = n / m;
		q = n % m;
		printf("����ƽ����Ϊ��");
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
			printf("\n\n�����ظ����㣬�밴�س���\n");
		if (getchar() != 'q')
			;
		if (getchar() != 'q')
			;
		system("cls");
	};
};