#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any three digit number: ");
    scanf("%d",&a);
    b=(a/10)/10;
    printf("The Hundreds digit is:%d",b);

}
