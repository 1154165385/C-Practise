#include<stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, i = 0, n = 0, B = 0, C = 0;
	printf("���ŵ����ǧ�����£�\n");
	printf("����һ�Ŷ���������\n");
	scanf_s("%d", &a);
	printf("����һ�Ŷ���������\n");
	scanf_s("%d", &b);
	printf("����һ�Ŷ���������\n");
	scanf_s("%d", &c);
	for (i = 0; n <= 1000; i++)
	{
		n = i * 3 + a;
		B = n % 5;
		C = n % 7;
		if (B == b && C == c)	
			printf("ʿ����������ֵ��%d  ", n);							
	};
};