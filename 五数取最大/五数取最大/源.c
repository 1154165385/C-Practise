#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (;;)
	{
		printf("����������������Ƚϴ�С��\n");
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
		printf("\n���е����ֵ�ǣ�%d\n\n\n�ٴΰ��س������¼���", max);
		d = getchar();
		d = getchar();
		system("cls");
	};
};