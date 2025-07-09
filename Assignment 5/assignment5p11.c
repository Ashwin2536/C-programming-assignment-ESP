#include<stdio.h>
int main()
{
    int n,a=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(;n!=0;)
    {
        n=n/10;
        a=a+1;
    }
    printf("%d",a);
}

