#include<stdio.h>
int main()
{
    int n,a=1,b;
    printf("Enter the number:");
    scanf("%d",&n);
    loop:if(n/10!=0)
    {
        b=n/10;
        a=a+1;
        n=b;
        goto loop;
    }
    printf("%d",a);
}
