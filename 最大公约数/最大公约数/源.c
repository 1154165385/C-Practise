#include<stdio.h>
#include<stdlib.h>

int gys(int a,int b)
{
		int c = 1;
		for (;;)
		{
			c = a % b;
			if (c == 0)//ŷ������㷨
				break;
			a = b;
			b = c;
		};
		return b;
};
int main()
{
	for (;;)
	{
		int x = 0, y = 0, g = 0;
		printf("�������һ����:");
		scanf_s("%d", &x);
		printf("�������һ����:");
		scanf_s("%d", &y);
		g = gys(x, y);
		printf("���ǵĹ�Լ��Ϊ%d\n", g);//��������Լ����ˣ����������ϵĻ�ͨ���Ѿ������gys����Ҳ�ɽ�Ϊ���ɵ�����ŷ������㷨���
		printf("\n\n\n���س����¼���");
		if (getchar() != '\n')
			;
		if (getchar() != '\n')
			;
		system("cls");
	};
};