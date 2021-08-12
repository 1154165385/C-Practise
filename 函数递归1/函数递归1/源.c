#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>

void prif(int x)
{
	if (x / 10 > 0)//x>10Òà¿É
		prif(x / 10);       //Õý
	printf("%d ",x % 10);
}

void prifd(int x)
{
	printf("%d ", x % 10);  //·´
	if (x > 10)
		prifd(x / 10);
}

int main()
{
	int a;
	scanf("%d", &a);
	prifd(a);
}