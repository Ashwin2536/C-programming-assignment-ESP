#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter any two digit number: ");
    scanf("%d",&n);
    a=n/10;
    b=(n%10)*0;
    printf("The result is:%d%d",a,b);
}
