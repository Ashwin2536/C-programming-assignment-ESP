#include<stdio.h>
int main()
{
    int a;
    printf("Enter any three digit number: ");
    scanf("%d",&a);
    (a%10+(a/10)%10+(a/10)/10==10)?
    printf("SUCCESS"):
    printf("FAILURE");
}
