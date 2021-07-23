#include <stdio.h>

int main()
{
    int i = 1;
    int a = 1;
    while (i <= 100)
    {
        int a = i % 2;
        if (a == 1)
            printf("%d\n",i);
        ;  
            i++;
    };
    return 0;


};

