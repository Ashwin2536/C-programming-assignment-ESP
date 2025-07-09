#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    (a%10==0)? printf("%d",a): printf("%d",a-5);
}
