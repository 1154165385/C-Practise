#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (;;)
	{
		int a = 0, b = 0, c = 0, pz = 0;
		printf("三数大小排序\n\n");
		printf("请输入第一个数：\n");
		scanf_s("%d", &a);
		printf("请输入第二个数：\n");
		scanf_s("%d", &b);
		printf("请输入第三个数：\n");
		scanf_s("%d", &c);
		if (a < b)
		{
			pz = a;
			a = b;
			b = pz;
		};;
		if (a < c)
		{
			pz = a;
			a = c;
			c = pz;
		};;
		if (b < c)
		{
			pz = b;
			b = c;
			c = pz;
		};;
		printf("%d %d %d\n", a, b, c);
		printf("请按回车键继续\n");
		if (getchar() != '\n')
			;
		if (getchar() != '\n')
			;
		system("cls");
	}
};