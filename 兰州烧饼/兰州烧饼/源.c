//�ձ������棬Ҫ����һ�������ձ���Ҫ���涼Ū�ȡ���Ȼ��һ��ֻ��Ūһ���Ļ���Ч�ʾ�̫���ˡ�
//����ôһ����ƽ�׹���һ�ο���ͬʱ����k�������ձ���һ����������һ�档��������n�������ձ���������Ҫ���ٷ��Ӳ���ȫ�������أ�
#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (;;)
	{
		int k = 0, n = 0, a = 0, b = 0;
		char c = 'a';
		printf("һ�οɷ�����ձ���:\n");
		scanf_s("%d", &k);
		printf("һ���������ձ���:\n");
		scanf_s("%d", &n);
		a = n / k;
		a = a * 2;
		b = n % k;
		if (b != 0)
			a = a + 2;
		printf("��Ҫ%d����\n\n\n�ٴμ����밴�س���", a);
		while (getchar() != '\n')
			continue;
		while (getchar() != '\n')
			continue;
			system("cls");
	};
};