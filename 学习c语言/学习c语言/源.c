#include <stdio.h>

int a = 0;
void test()
{
	
	a++;
	printf("学习C语言的第 %d 天\n",a);


}
int main()
{
	int i = 0;
	while  (i < 40)
	{
		test();
		i++;
		
     }
	printf("快开学了,\n");
	printf("前往西安，报道仙电子科技大学\n");
	printf("大学生活即将开始\n");
	return 0;

}