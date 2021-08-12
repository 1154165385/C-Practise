#include<stdio.h>
#include<stdlib.h>

void wuxian(int (*func)())
{
	for (;;)
	{
		func();
		if (getchar() != 'n');
		if (getchar() != 'n');
		system("cls");
	};
}
