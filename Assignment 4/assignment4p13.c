#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter the number:");
    scanf("%d",&n);
    loop:if(n!=0)
    {
        a=n%10;
        printf("%d",a);
        b=n/10;
        n=b;
        goto loop;
    }
}
