#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>

int FBNQ(int x)
{
	if (x <= 2)
		return 1;
	else
		return FBNQ(x - 1) + FBNQ(x - 2);

}

int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d\n",FBNQ(a));
}