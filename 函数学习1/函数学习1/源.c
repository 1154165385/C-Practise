#include<stdio.h>

//void exchange1(int a,int b)//��1��ֱ��ab����
//{
//	int zj = 0;
//	a = zj;
//	a = b;
//	b = zj;
//};

void exchange2(int* x,int* y)//��2��ָ��������ַ
{
	int jh = 0;
	jh = *x;
	*x = *y;
	*y = jh;
};

int main()//��ͨ�Ľ����ڽ���ʱ�����������ֵ���ı�Ľ�Ϊx��y��a��b���޸ı�
{         //Ϊ�˽�a��b���иı䣬���ǿ���ֱ�Ӿ�a��b�����޸ģ��������޸Ľ�������a��b���������ʵ�����������
	int a = 10;//��ָ�������ڸ����϶Զ��߽��иı䣬���������ԡ�
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
//int main()   //����ʾ��
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