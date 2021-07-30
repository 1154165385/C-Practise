#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
		for (;;)
		{
			printf("你的电脑将在一分钟内关机，请输入：“我是猪”来防止本次关机。\n请不要关闭本程序，否则将无法阻止关机\n\n");
			scanf("%s",input);
			if (strcmp(input,"我是猪") == 0)
			{
				system("shutdown -a");
				break;
			};
			;
			};
};