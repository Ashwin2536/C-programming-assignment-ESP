#include<stdio.h>
int main()
{
    int n,i,sum=0,a,b,c,d=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    i=n;
    for(;i!=0;)
    {
        a=i/10;
        b=i%10;
        sum=sum+b;
        i=a;
    }
    for(c=2;c<n;c++)
    {
        if(n%c==0)
        {
            d=0;
            break;
        }
    }
    if(d==0&&sum==14)
        printf("%d Not prime but sum of digit is 14",n);
    if(d==1&&sum==14)
        printf("%d prime and sum of digit is 14",n);
    if(d==0&&sum!=14)
        printf("%d Not prime and sum of digit is not 14",n);
    if(d==1&&sum!=14)
        printf("%d Prime and sum of digit is not 14",n);
}
