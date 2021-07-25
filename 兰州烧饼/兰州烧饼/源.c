//烧饼有两面，要做好一个兰州烧饼，要两面都弄热。当然，一次只能弄一个的话，效率就太低了。
//有这么一个大平底锅，一次可以同时放入k个兰州烧饼，一分钟能做好一面。而现在有n个兰州烧饼，至少需要多少分钟才能全部做好呢？
#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (;;)
	{
		int k = 0, n = 0, a = 0, b = 0;
		char c = 'a';
		printf("一次可放入的烧饼数:\n");
		scanf_s("%d", &k);
		printf("一共需做的烧饼数:\n");
		scanf_s("%d", &n);
		a = n / k;
		a = a * 2;
		b = n % k;
		if (b != 0)
			a = a + 2;
		printf("需要%d分钟\n\n\n再次计算请按回车键", a);
		while (getchar() != '\n')
			continue;
		while (getchar() != '\n')
			continue;
			system("cls");
	};
};