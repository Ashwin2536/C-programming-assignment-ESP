#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter any Three digit number: ");
    scanf("%d",&a);
    if (a<1000)
    {
        b=a%10;
        printf("The ones digit is: %d",b);
    }
    else
        printf("It is not a three digit number");
}
