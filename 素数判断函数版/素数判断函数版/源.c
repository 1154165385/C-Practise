#include<stdio.h>

int l = 0;

int ss(int x)
{
	l = 0;
	int i = 0, b = 0;	
	for (i = 2; i < x; i++)
	{
		b = x % i;
		if (b == 0)
		{
			l = 1;
				break;
		};
	};
};

int main()
{
	int a = 0, b = 0;
	printf("��������Ҫ�ж��Ƿ�Ϊ���������֣�\n");
scanf_s("%d", &a);
b = ss(a);
if (b == 1)
printf("�Ǻ���\n");
else
printf("������\n");
};