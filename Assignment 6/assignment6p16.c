#include<stdio.h>
int main()
{
    int n,i,a=1;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<2)
    {
        a=0;
    }
    i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            a=0;
            break;
        }
        i++;
    }
    if(a)
        printf("Prime");
    else
        printf("Not prime");
}
