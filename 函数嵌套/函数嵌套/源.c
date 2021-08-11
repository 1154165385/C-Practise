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
	printf("摸鱼中\n");
};

int main()
{
	int a;
	printf("你想摸几次鱼\n");
	scanf("%d", &a);
	times(prif, a);
};