#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void game()
{
	int sj = 0, cc = 0;
	sj = rand() % 100 + 1;
	for (;;)
	{
		scanf_s("%d", &cc);
			if (cc < sj)
				printf("��С��\n");
			else if (cc > sj)
				printf("�´���\n");
			else
			{
				printf("�¶���\n");
					break;
			};
	};
};


int main()
{
	int ks = 0;
	printf("\n _________________\n");
	printf("��                ��\n");
	printf("�� ��ʼ��������Ϸ ��\n");
	printf("��                ��\n");
	printf("�� ���� 0  - 100  ��\n");
	printf("��                ��\n");
	printf("��  ��       ��   ��\n");
	printf("��  1         0   ��\n");
	printf("������������������������������������\n");
	for(;;)
	{
		
		if (ks == 1)
		{
			printf("\n _________________\n");
			printf("��                ��\n");
			printf("�� ������������Ϸ ��\n");
			printf("��                ��\n");
			printf("��  ��       ��   ��\n");
			printf("��  1         0   ��\n");
			printf("������������������������������������\n");
		};
		;
		srand(time);
		scanf_s("%d", &ks);
		switch (ks)
		{
		case 0:
			break;
		case 1:
		{
			system("cls");
			printf("��Ϸ��ʼ\n\n�뿪ʼ����\n\n");
			game();
			break;
		};
		default:
			printf("�������\n");
		};
			if (ks == 0)
				break;				
	};
};