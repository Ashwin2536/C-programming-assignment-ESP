#include<stdio.h>
int main()
{
    int n,a,b,d=0,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        a=i%10;
        b=i/10;
        if(a%2!=0)
        {
            d++;;
        }
        i=b;
    }
    printf("%d",d);
}

