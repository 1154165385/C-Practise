#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	for (;;)
	{
		int i = 1, a = 0, b = 0, c = 0, d = 1;
		printf("��ӡ������������������\n");
		scanf_s("%d", &a);
		printf("������1  ");
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
		printf("\n\n��������%d��", d);
		printf("\n\n���س��ٴμ���");

		if (getchar() != '/n')
			;
		if (getchar() != '/n')
			;
		system("cls");
	};
};