#include<stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, i = 0, n = 0, B = 0, C = 0;
	printf("韩信点兵（千人以下）\n");
	printf("三人一排多余人数：\n");
	scanf_s("%d", &a);
	printf("五人一排多余人数：\n");
	scanf_s("%d", &b);
	printf("七人一排多余人数：\n");
	scanf_s("%d", &c);
	for (i = 0; n <= 1000; i++)
	{
		n = i * 3 + a;
		B = n % 5;
		C = n % 7;
		if (B == b && C == c)	
			printf("士兵人数可能值：%d  ", n);							
	};
};