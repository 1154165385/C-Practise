#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
		for (;;)
		{
			printf("��ĵ��Խ���һ�����ڹػ��������룺������������ֹ���ιػ���\n�벻Ҫ�رձ����򣬷����޷���ֹ�ػ�\n\n");
			scanf("%s",input);
			if (strcmp(input,"������") == 0)
			{
				system("shutdown -a");
				break;
			};
			;
			};
};