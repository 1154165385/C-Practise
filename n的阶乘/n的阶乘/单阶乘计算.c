#include <stdio.h>

int main()
{
	for (;;)
	{
		printf("��������Ҫ���׳˼��������");
		int num = 0, a = 1, i = 1;
		scanf_s("%d", &num);
		for (i = 1, a = 1; i <= num; i++)
		{
			a = a * i;
		};
		printf("������Ϊ%d\n\n", a);
		
	}
};