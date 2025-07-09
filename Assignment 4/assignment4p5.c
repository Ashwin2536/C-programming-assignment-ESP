#include<stdio.h>
int main()
{
    int a=0;
    loop:if (a<10)
    {
        if(a%2!=0)
        {printf("\n%d",a);}
        a=a+1;
        goto loop;
    }

}
