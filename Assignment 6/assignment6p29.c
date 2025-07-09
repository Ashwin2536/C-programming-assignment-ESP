#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);
    if(a>b&&a>c)
        n=a;
    if(b>a&&b>c)
        n=b;
    else
        n=c;
    while(1)
    {
        if(n%a==0&&n%b==0&&n%c==0)
        {
            printf("%d",n);
            break;
        }
        n++;
    }
}
