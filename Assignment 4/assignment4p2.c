#include<stdio.h>
int main()
{
    int a=5;
    loop: if (a>0)
    {
        printf("\n%d",a);
        a=a-1;
        goto loop;
    }
}

