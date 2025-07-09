#include<stdio.h>
int main()
{
    int n,a,b,c=1,i,d;
    printf("Enter the number: ");
    scanf("%d",&n);
    a=n%10;  //last digit of the number
    i=n;
    while(i>10)
    {
        i=i/10;
        c=c*10;
    }
    printf("\n%d",c);
    b=a*c+(n%c)-a;
    printf("\n%d",b);
    b=b+i;
    printf("\n%d",b);
}
