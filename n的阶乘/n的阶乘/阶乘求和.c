#include <stdio.h>

int main()
{
	for(;;)
	{
		printf("����������׳���͵�����");
		int num = 1, a = 1, b = 0, i = 1;
		scanf_s("%d", &num);
			for(i=1 ; i <= num; i++)
			{
				a = a * i;
				b = b + a;
			};
			printf("������Ϊ:%d\n\n", b);
	}		
};