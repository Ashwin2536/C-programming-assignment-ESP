#include<stdio.h>
int main()
{
    int n,a,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("The sum of digit:%d",sum);
}
