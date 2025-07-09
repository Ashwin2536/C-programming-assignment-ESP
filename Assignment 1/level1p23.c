#include<stdio.h>
int main()
{
    int a;
    printf("Enter any two digit number: ");
    scanf("%d",&a);
    ((a/10+a%10)%2==0)? printf("The result:%d",a):
    printf("The result=%d",a-5);

}
