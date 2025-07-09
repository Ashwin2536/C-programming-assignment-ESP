#include<stdio.h>
int main()
{
    int n,a,b,c,i=1;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    n=a<b?a:b;
    while(i<=n)
    {
        if(a%i==0&&b%i==0)
        {
            c=i;
        }
        i++;
    }
    printf("%d",c);
}
