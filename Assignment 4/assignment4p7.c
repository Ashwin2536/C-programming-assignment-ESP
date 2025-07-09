#include<stdio.h>
int main()
{
    int a=10;
    loop:if(a<100)
    {
        if(a%2!=0&a%10+a/10==7)
        {
            printf("\n%d",a);
        }
        a=a+1;
        goto loop;
    }
}
