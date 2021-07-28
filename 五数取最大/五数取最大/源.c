#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (;;)
	{
		printf("请依次输入五个数比较大小：\n");
		int arr[5] = { 0,0,0,0,0 };
		int a = 0, i = 0, b = 0, max = 0, c = 0, d = 0;
		for (i = 0; i < 5; i++)
		{
			scanf_s("%d", &b);
			arr[i] = b;
		};
		max = arr[0];
		for (a = 0; a < 5; a++)
		{
			if (max < arr[a])
				max = arr[a];
		};
		printf("\n其中的最大值是：%d\n\n\n再次按回车键重新计算", max);
		d = getchar();
		d = getchar();
		system("cls");
	};
};