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
				printf("猜小了\n");
			else if (cc > sj)
				printf("猜大了\n");
			else
			{
				printf("猜对了\n");
					break;
			};
	};
};


int main()
{
	int ks = 0;
	printf("\n _________________\n");
	printf("│                ┃\n");
	printf("│ 开始猜数字游戏 ┃\n");
	printf("│                ┃\n");
	printf("│ 猜数 0  - 100  ┃\n");
	printf("│                ┃\n");
	printf("│  是       否   ┃\n");
	printf("│  1         0   ┃\n");
	printf("┗━━━━━━━━━━━━━━━━┛\n");
	for(;;)
	{
		
		if (ks == 1)
		{
			printf("\n _________________\n");
			printf("│                ┃\n");
			printf("│ 继续猜数字游戏 ┃\n");
			printf("│                ┃\n");
			printf("│  是       否   ┃\n");
			printf("│  1         0   ┃\n");
			printf("┗━━━━━━━━━━━━━━━━┛\n");
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
			printf("游戏开始\n\n请开始猜数\n\n");
			game();
			break;
		};
		default:
			printf("输入错误\n");
		};
			if (ks == 0)
				break;				
	};
};