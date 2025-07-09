#include<stdio.h>
int main()
{
    int n,i,sum=0,a,b,c=2,d=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<2)
        {
            printf("%d Neither prime nor composite",n);
            d=0;
        }
    i=n;
    while(i!=0)
    {
        b=i%10;
        sum=sum+b;
        a=i/10;
        i=a;
    }
    while(c<n)
    {
        if(n%c==0)
        {
            d=0;
            break;
        }
        c++;
    }
    if(d==0&&sum==14)
        printf("%d Not prime but sum of digit is 14",n);
    if(d==0&&sum!=14)
        printf("%d Not prime and sum of digit is not 14",n);
    if(d==1&&sum==14)
        printf("%d prime and sum of digit is 14",n);
    if(d==1&&sum!=14)
        printf("%d prime but sum of digit is not 14",n);
}
