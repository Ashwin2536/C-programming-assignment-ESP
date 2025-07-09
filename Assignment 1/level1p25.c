#include<stdio.h>
int main()
{
    int a;
    printf("Enter any four digit number: ");
    scanf("%d",&a);
    ((a/100)%10==(a%100)/10)?
    printf("The result:%d",a-5):
    printf("The result:%d",a);
}
