#include<stdio.h>
int main()
{
    int *b,a=5;
    printf("%d = a",a);
    printf("\n%d= &a",&a);
    b=&a;
    printf("\n%d = b",b);
    printf("\n%d = *b",*b);
    printf("\n%d = &b",&b);
}
