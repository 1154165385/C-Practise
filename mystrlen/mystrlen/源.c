#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>

int mystrlen(char* p)
{
	if (*p != '\0')
		return 1 + mystrlen(++p);
	else
		return 0;
}

int main()
{
	char arr[] = "mystrlen";
	printf("%d\n", mystrlen(arr));
	return 0;
}