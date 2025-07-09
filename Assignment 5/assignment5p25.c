#include<stdio.h>
int main()
{
    int n,a,b,d=0,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    i=n;
    for(;i!=0;)
    {
        a=i%10;
        b=i/10;
        if(a==2||a==3||a==5||a==7)
        {
            d++;
        }
        i=b;
    }
    printf("%d",d);
}
