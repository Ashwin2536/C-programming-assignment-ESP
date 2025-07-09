#include<stdio.h>
int main()
{
    int n,i,b,a=1;
    printf("Enter the number: ");
    scanf("%d",&n);
  if(n<2)
    a=0;
    b=n%100;
    for(i=2;i<b;i++)
    {
        if(b%i==0)
        {
            a=0;
            break;
        }
    }
    if(a)
        printf("%d prime",b);
    else
        printf("%d not prime",b);
}
