#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enter the numbe: ");
    scanf("%d",&n);
    a=n/100;
    b=n%10;
    c=(n%100)/10;
    printf("Result=%d%d%d",a,b,c);
}
