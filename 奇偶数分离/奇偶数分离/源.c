//��ż������
//
//��һ������ż��n(2 <= n <= 10000), ��Ҫ�����ǣ��Ȱ�1��n�е�����������С����������ٰ����е�ż����С���������
#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (;;)
	{
		int i = 0, a = 0;
		printf("����������ż�����������");
		scanf_s("%d", &a);
		if (a < 2)
			printf("��ô�����ֻ������㣿");
		else
		{
			printf("�����У�");
			for (i = 1; i <= a; i+=2)
				printf("%d  ", i);
			printf("\n\nż���У�");
			for (i = 0; i <= a; i+=2)
				printf("%d  ", i);
		};
		printf("\n\n�س�����");
		while (getchar() != '\n')
			;
		while (getchar() != '\n')
			;
		system("cls");		
	};
};