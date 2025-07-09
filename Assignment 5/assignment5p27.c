#include<stdio.h>
int main()
{
    int n,i,a,sum,c=0;
    for(i=1;i<100000;i++)
    {
        sum=0;
        n=i;
        for(;n!=0;)
        {a=n%10;
        sum=sum+a;
        n=n/10;
        }
        if(sum==14)
        {
            c++;
        }
    }
    printf("%d",c);
}
