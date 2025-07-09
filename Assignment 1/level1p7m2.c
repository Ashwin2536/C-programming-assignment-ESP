#include <stdio.h>
int main()
{
    int a,b;
    printf ("Enter the number:  ");
    scanf("%d",&a);
    b=(a/10)%10;
    printf("The tens digit is:%d",b);
}
