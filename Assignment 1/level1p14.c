#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter any three digit number: ");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=a/100;
    printf("The reverse number is:%d%d%d",b,c,d);
}
