#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        sum=sum+1;
    }
    printf("%d",sum);
}
