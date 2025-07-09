#include<stdio.h>
int main()
{
    int i=0,sum=0;
    loop:if(i<5)
    {
        i=i+1;
        sum=sum+i;
        goto loop;
    }
    printf("%d",sum);
}

