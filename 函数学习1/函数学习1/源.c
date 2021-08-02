#include<stdio.h>

//void exchange1(int a,int b)//法1：直接ab交换
//{
//	int zj = 0;
//	a = zj;
//	a = b;
//	b = zj;
//};

void exchange2(int* x,int* y)//法2：指针变量解地址
{
	int jh = 0;
	jh = *x;
	*x = *y;
	*y = jh;
};

int main()//普通的交换在交换时不会产生返回值，改变的仅为x、y，a、b并无改变
{         //为了将a、b进行改变，我们可以直接就a、b进行修改，但这种修改仅局限于a、b，难以普适到其他变量，
	int a = 10;//而指针则是于根本上对二者进行改变，具有普适性。
	int b = 20;
	int* pa = &a;
	int* pb = &b;
	printf("a=%d  b=%d\n", a, b);
	//exchange1(a, b);
	exchange2(&a, &b);
	printf("a=%d  b=%d\n", a, b);
};

//void swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//};
//
//int main()   //错误示范
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	printf("a=%d  b=%d\n", a, b);
//	swap(*pa, *pb);
//	printf("a=%d  b=%d\n", a, b);
//	
//};