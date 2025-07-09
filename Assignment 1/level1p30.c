#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter any four digit number:");
    scanf("%d",&n);
    a=(n/100)%10;
    b=(n%100)/10;
    (a>7|b>7)?
    printf("Success"):
    printf("Failure");
}
