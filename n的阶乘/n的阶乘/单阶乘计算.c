#include <stdio.h>

int main()
{
	for (;;)
	{
		printf("请输入需要被阶乘计算的数：");
		int num = 0, a = 1, i = 1;
		scanf_s("%d", &num);
		for (i = 1, a = 1; i <= num; i++)
		{
			a = a * i;
		};
		printf("计算结果为%d\n\n", a);
		
	}
};