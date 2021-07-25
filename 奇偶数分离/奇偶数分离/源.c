//奇偶数分离
//
//有一个整型偶数n(2 <= n <= 10000), 你要做的是：先把1到n中的所有奇数从小到大输出，再把所有的偶数从小到大输出。
#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (;;)
	{
		int i = 0, a = 0;
		printf("请输入想奇偶数分离的数：");
		scanf_s("%d", &a);
		if (a < 2)
			printf("这么点数字还懒得算？");
		else
		{
			printf("奇数有：");
			for (i = 1; i <= a; i+=2)
				printf("%d  ", i);
			printf("\n\n偶数有：");
			for (i = 0; i <= a; i+=2)
				printf("%d  ", i);
		};
		printf("\n\n回车重试");
		while (getchar() != '\n')
			;
		while (getchar() != '\n')
			;
		system("cls");		
	};
};