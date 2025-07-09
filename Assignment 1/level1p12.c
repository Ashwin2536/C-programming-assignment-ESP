#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any three digit number: ");
    scanf("%d",&a);
    b=(a/100)+(a%100)/10+a%10;
    printf("The sum of digit is:%d",b);
}
