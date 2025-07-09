#include<stdio.h>
int main()
{
    int a,b,i,x=1,c;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    c=a*b;
    for(i=1;;i++)
    {
        if(a%i==0&&b%i==0)
        {x=x*i;
        }
        printf("%d",x);
    }
}
