#include<stdio.h>
int main()
{
    int n,i,a,b,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    i=n;
    for(;i!=0;)
    {
        a=i%10;
        b=i/10;
        if(a%2!=0)
        {
            c++;
        }
        i=b;
    }
    printf("%d",c);
}
