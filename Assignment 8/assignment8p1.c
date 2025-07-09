#include<stdio.h>
int disp_sum();
int main()
{
    int result;
    result=disp_sum();
    printf("The result is: %d",result);
}
int disp_sum()
{
    int sum=0;
    for(int i=0;i<=5;i++)
    {
        sum=sum+i;
    }
    return sum;
}
