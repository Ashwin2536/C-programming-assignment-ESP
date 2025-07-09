#include<stdio.h>
int main()
{
    int a,b,s,d;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    s=a+b;
    if(s<100)
            printf("%d",s);
    else
       {
           d=(a-b);
           printf("%d",d);
       }
}
