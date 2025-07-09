#include<stdio.h>
int main()
{
    int a=100;
    loop:if(a<1000)
    {
        if((a/10)%10==7&a%10+a/100==7)
        {
            printf("\n%d",a);
        }
    }
    a=a+1;
    goto loop;
}
