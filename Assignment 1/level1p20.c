#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enter any three digit number: ");
    scanf("%d",&n);
    a=(n/10)/10;
    b=(n/10)%10*0;
    c=n%10;
    printf("The result is:%d%d%d",a,b,c);
}
