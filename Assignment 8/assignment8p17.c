#include<stdio.h>
int disp_count_sum14();
int main()
{
    int result;
    result=disp_count_sum14();
    printf("The result is:%d",result);
}
int disp_count_sum14()
{
    int count=0,i,sum,n,a;
    for(i=1;i<100000;i++)
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
            count++;
    }
    return count;
}
