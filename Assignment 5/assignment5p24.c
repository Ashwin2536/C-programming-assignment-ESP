#include<stdio.h>
int main()
{
    int n,a,b,i,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(;n>9;)
    {
        for(i=3;i<10;i++)
        {
            a=i*i;
            b=n%100;
            if(a==b)
            {
                c++;
            }
        }
        n=n/10;
    }
    printf("%d",c);
}
