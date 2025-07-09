#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enter any two digit number: ");
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    c=a+b;
    printf("The sum of digit is: %d",c);
}
