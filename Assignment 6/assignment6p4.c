#include<stdio.h>
int main()
{
    int n=6,sum=0;
    while(n>0)
    {
        sum=sum+n;
        n--;
    }
    printf("%d",sum);
}
