#include<stdio.h>
int main()
{
    int n,a,b,c=1,d,i;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%2==0)
    {printf("%d",n);}
    else
    {
     i=n;
     loop:if(i>10)
     {
         b=i/10;
         c=c*10;
         i=b;
         goto loop;
     }
     d=(i-1)*c+(n%c);
     printf("%d",d);
    }

}
