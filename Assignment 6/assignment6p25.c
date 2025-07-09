#include<stdio.h>
int main()
{
    int n,a,b,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        if(a==2||a==3||a==5||a==7)
        {
            c++;
        }
        n=n/10;
    }
    printf("%d",c);
}
