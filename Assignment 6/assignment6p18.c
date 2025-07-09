#include<stdio.h>
int main()
{
    int n,i=2,b,a=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<2)
        a=0;
    b=n%100;
    while(i<b)
    {
        if(b%i==0)
        {
            a=0;
            break;
        }
        i++;
    }
    if(a)
        printf("%d Prime",b);
    else
        printf("%d Not Prime",b);
}
