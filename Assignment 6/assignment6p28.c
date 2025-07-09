#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    n=(a>b)?a:b;
    while(1)
    {
        if(n%a==0&&n%b==0)
        {
            printf("%d",n);
            break;
        }
        n++;
    }
}
