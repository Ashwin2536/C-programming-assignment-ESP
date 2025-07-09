#include<stdio.h>
int main()
{
    int n,a,b,c,result;
    printf("Enter the number: ");
    scanf("%d",&n);
    b=n/1000;
    a=(n%1000)/100;
    c=n%100;
    printf("The result is:%d%d%d",a,b,c);
}
