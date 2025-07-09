#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enter any four digit number: ");
    scanf("%d",&n);
    a=(n/100)%10;
    b=(n%100)/10;
    c=a+b;
    (c>10)?
    printf("Success"):printf("Failure");
}
