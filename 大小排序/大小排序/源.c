#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (;;)
	{
		int a = 0, b = 0, c = 0, pz = 0;
		printf("������С����\n\n");
		printf("�������һ������\n");
		scanf_s("%d", &a);
		printf("������ڶ�������\n");
		scanf_s("%d", &b);
		printf("���������������\n");
		scanf_s("%d", &c);
		if (a < b)
		{
			pz = a;
			a = b;
			b = pz;
		};;
		if (a < c)
		{
			pz = a;
			a = c;
			c = pz;
		};;
		if (b < c)
		{
			pz = b;
			b = c;
			c = pz;
		};;
		printf("%d %d %d\n", a, b, c);
		printf("�밴�س�������\n");
		if (getchar() != '\n')
			;
		if (getchar() != '\n')
			;
		system("cls");
	}
};