#include<stdio.h>
int main()
{
    int n,a,b=0,c;
    printf("Enter the number:");
    scanf("%d",&n);
    loop:if(n!=0)
    {
        a=n%10;
        b=b+a;
        c=n/10;
        n=c;
        goto loop;
    }
    printf("%d",b);
}
