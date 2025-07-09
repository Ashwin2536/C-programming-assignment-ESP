#include<stdio.h>
int main()
{
    int n,a,b,c=1,d,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    a=n%10;
    i=n;
    for(;i>10;)
    {
        b=i/10;
        c=c*10;
        printf("\n%d",c);
        i=b;
    }
    d=a*c+n%c;
    printf("\n%d",d);
    d=d-a;
    printf("\n%d",d);
    d=d+i;
    printf("\n%d",d);
}
