#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>

void times(int (*func)(),int x)
{
	int i;
		for (i=0; i < x; i++)
		{
			(*func)();
		};
};

int prif()
{
	printf("������\n");
};

int main()
{
	int a;
	printf("������������\n");
	scanf("%d", &a);
	times(prif, a);
};