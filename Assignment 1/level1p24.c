#include<stdio.h>
int main()
{
    int a;
    printf("Enter any three digit number: ");
    scanf("%d",&a);
    (a%10!=a/100)?
    printf("The result:%d",a):
    printf("The result:%d",a-5);
}
