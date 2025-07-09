#include<stdio.h>
int main()
{
    int n,a,b,c,i,d=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    a=(n/10)%10;
    b=(n/100)%10;
    c=b*10+a;
    for(i=2;i<c;i++)
    {
        if(c%i==0)
        {
            d=0;
            break;
        }
    }
    if(d)
        printf("Prime %d",c);
    else
        printf("Not prime %d",c);
}
