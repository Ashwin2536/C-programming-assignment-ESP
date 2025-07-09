#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any two digit number:  ");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    printf("The reverse number is:%d%d",c,b);
}
