#include<stdio.h>

int main()
{
	int a = 1, b = 1, c = 1;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			c = a * b;
			printf("%d ¡Á %d=%-2d  ", a, b, c);
		};
		printf("\n");
	};
};