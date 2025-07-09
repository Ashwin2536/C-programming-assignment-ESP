#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(;n!=0;)
    {
        i=n%10;
        printf("%d",i);
        n=n/10;
    }
}
