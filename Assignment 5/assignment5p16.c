#include<stdio.h>
int main()
{
    int n,i,a=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }
    }
if(a==0)
{
    printf("%d prime",n);
}
else
    printf("%d not prime",n);
}
