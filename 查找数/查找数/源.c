#include <stdio.h>

int main() 
{
	for (;;)
	{
		int mb = 0;
		scanf_s("%d", &mb);
		int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
		int sz = sizeof(arr) / sizeof(arr[0]);
		int left = 0, right = sz - 1, zz = 0;
		while (left <= right)
		{
			zz = (left + right) / 2;
			if (arr[zz] > mb)
				right = zz - 1;
			else if (arr[zz] < mb)
				left = zz + 1;
			else
			{
				printf("сп%d\n", zz + 1);
				break;
			}
			if (left > right)
				printf("ц╩ур╣╫\n");
		};
	};

};