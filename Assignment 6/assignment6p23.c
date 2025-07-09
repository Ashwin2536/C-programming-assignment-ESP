#include<stdio.h>
int main()
{
    int n,a,b=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        if(a==1||a==4||a==9)
        {
            b++;
        }
        n=n/10;
    }
    printf("%d",b);
}
