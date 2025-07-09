#include<stdio.h>
int main()
{
    int a,b,c,i,x;
    printf("Enter two numbers:\n");
    scanf("%d \n%d",&a,&b);
    c=a<b?a:b;
    for(i=1;i<=c;i++)
    {
        if(a%i==0&&b%i==0)
        {
            x=i;
        }
    }
   printf("The HCF/GDC is:%d",x);

}
