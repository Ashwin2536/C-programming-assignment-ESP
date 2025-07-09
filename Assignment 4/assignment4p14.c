#include<stdio.h>
int main()
{
    int n,a,b,c=1,d,i;
    printf("Enter the number:");
    scanf("%d",&n);
    a=n%10;  //last number
    i=n;
    loop:if(i>10)
    {
        b=i/10;
        c=c*10;
        i=b;
        goto loop;//i is the first number
    }
    d=a*c+n%c;
    d=d-a;
    d=d+i;
    printf("%d",d);
}
