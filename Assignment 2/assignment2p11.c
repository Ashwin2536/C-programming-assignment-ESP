#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter the number:");
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    (b<=a)?printf("The result:1"):printf("The result:0");
}
