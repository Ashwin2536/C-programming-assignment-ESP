#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter the number:");
    scanf("%d",&n);
    a=n%100;
    b=n/100;
    (a==b)?printf("The result:1"):printf("The result:0");
}
