#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter any Two digit number: ");
    scanf("%d",&a);
    if (a<100)
    {
        b=a/10;
        printf("The tens digit is: %d",b);
    }
    else
    {
        printf("It is not a two digit number");
    }
}
