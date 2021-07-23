#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "hello  world!!!";
	int left = 0;
	char arr2[] = "###############";
	int right = (sizeof(arr1) - 2) / sizeof(arr1[0]);

	printf("%s\n", arr2);
	while (left <= right)
	{
		Sleep(200);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left = left + 1;
		right = right - 1;
		system("cls");
		printf("%s\n",arr2);
	};

};
