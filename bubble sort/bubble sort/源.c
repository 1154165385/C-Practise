#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>

void bubble_sort(int arr[],int x)
{
	int a, b, d, e;
	for (a = 0; a <x-1; a++)
	{
		e = 1;
		for (b = 0; b < x-1-a; b++)
		{
			if (arr[b] > arr[b + 1])
			{
				d = arr[b+ 1];
				arr[b + 1] = arr[b];
				arr[b] = d;
				e = 0;
			};;
		};
		if (e == 1)
			break;
	};

}

int main()
{
	int arr1[] = { 9,5,7,6,8,2,4,3,1 }, sz, i;
	sz = sizeof(arr1) / sizeof(arr1[0]);
	bubble_sort(arr1, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	};
}