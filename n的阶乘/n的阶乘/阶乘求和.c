#include <stdio.h>

int main()
{
	for(;;)
	{
		printf("请输入你想阶乘求和的数：");
		int num = 1, a = 1, b = 0, i = 1;
		scanf_s("%d", &num);
			for(i=1 ; i <= num; i++)
			{
				a = a * i;
				b = b + a;
			};
			printf("计算结果为:%d\n\n", b);
	}		
};