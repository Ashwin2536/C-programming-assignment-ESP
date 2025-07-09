#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    if((a/10)/10>(b/10)/10)
    {
        c=a%10-a/100;
        printf("%d",c);
    }
    else
    {
        c=b%10-b/100;
        printf("%d",c);
    }
}
