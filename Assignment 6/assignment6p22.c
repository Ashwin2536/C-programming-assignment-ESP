#include<stdio.h>
int main()
{
    int n,a,b=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>9)
    {
        a=n%100;
        if(a%2!=0)
        {
            b++;
        }
        n=n/10;
    }
    printf("%d",b);
}
