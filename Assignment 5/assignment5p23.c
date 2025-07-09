#include<stdio.h>
int main()
{
    int n,a,b,i,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(;n>0;)
    {


        for(i=0;i<4;i++)
        {
           a=i*i;
           b=n%10;
             if(a==b)
               {
                  c++;
               }
        }
        n=n/10;
    }
    printf("%d",c);
}
