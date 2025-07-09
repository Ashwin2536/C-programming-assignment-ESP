#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enter any three digit number: ");
    scanf("%d",&n);
    a=n%10;
    b=(n/10)/10;
    c=a+b;
    if(c<10)
        printf("SUCCESS");
    else
        printf("FAILURE");
}
