#include<stdio.h>
int main()
{
    int n,i=1,a,sum,c=0;
    while(i<100000)
    {
        sum=0;
        n=i;
        while(n!=0)
        {
            a=n%10;
            sum=sum+a;
            n=n/10;
        }
        if(sum==14)
        {
            c++;
        }
        i++;
    }
    printf("%d",c);
}
