#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//����һ����1�֡�2�֡�5����ɵ�n��Ӳ������ֵΪm�֣���һ���ж����ֿ��ܵ���Ϸ�ʽ��ĳ����ֵ��Ӳ�ҿ�����������Ϊ0����
int main()
{
	for (;;)
	{
		int d = 0, e = 0, f = 0, g = 0, i = 0, o = 0;
		printf("�ܹ���ֵΪ:\n");
		scanf("%d", &d);
		e = d / 5;
		printf("���ܽ���У�\n");
		for (i = 0; i <= e; i++)
		{
			f = (d - i * 5) / 2;
			for (o = 0; o <= f; o++)
			{
				g = d - i * 5 - o * 2;
				printf("����1��Ӳ��%2dö��2��Ӳ��%2dö��5��Ӳ��%2dö\n", g, o, i);
			};
		};
		printf("�밴�س����ظ�����");
		if (getchar() != 'd')
			;
		if (getchar() != 'd')
			;
		system("cls");
	};

};