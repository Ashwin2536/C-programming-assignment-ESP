#include<stdio.h>
void disp_count_sum14( );
int main()
{
    disp_count_sum14();
}
void disp_count_sum14( )
{
    int a,count=0,n,i,sum;
    for( i=1;i<100000;i++)
    {
        sum=0;
        n=i;
        while(n!=0)
        {
           a=n%10;
           sum=sum+a;
           n=n/10;
        }
           if(sum==14)
                {
                    count++;
                }
    }
    printf("%d",count);
}
