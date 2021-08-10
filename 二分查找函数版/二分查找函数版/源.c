#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>

int cz(int arr[],int x,int y)
{
	int left = 0, right = 0, md = 0;
	right = y;
	while (left <= right)
	{
		md = (left + right) / 2;
		if (arr[md] > x)
			right = md - 1;
		else if (arr[md] < x)
			left = md + 1;
		else
			break;
	};
	if (arr[md] == x)
		return 1;
	else
		return 0;
};

int main()
{
	int i;
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int k = 5;
	int sz;
	sz = sizeof(arr) / sizeof(arr[0])-1;
	i = cz(arr, k, sz);
	if(i==1)
		printf("找到了");
	else
			printf("找不到");
	return 0;
};

//int main()
//{
//	2 >= 2 ? printf("ok") : printf("no");
//};