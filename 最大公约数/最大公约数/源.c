#include<stdio.h>
#include<stdlib.h>

int gys(int a,int b)
{
		int c = 1;
		for (;;)
		{
			c = a % b;
			if (c == 0)//欧几里得算法
				break;
			a = b;
			b = c;
		};
		return b;
};
int main()
{
	for (;;)
	{
		int x = 0, y = 0, g = 0;
		printf("请输入第一个数:");
		scanf_s("%d", &x);
		printf("请输入第一个数:");
		scanf_s("%d", &y);
		g = gys(x, y);
		printf("他们的公约数为%d\n", g);//两个数求公约数如此，两个数以上的话通过已经定义的gys函数也可较为轻松地利用欧几里得算法解决
		printf("\n\n\n按回车重新计算");
		if (getchar() != '\n')
			;
		if (getchar() != '\n')
			;
		system("cls");
	};
};