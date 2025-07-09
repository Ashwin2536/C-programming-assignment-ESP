#include<stdio.h>
int disp_rsum();
int main()
{
    int result;
    result=disp_rsum();
    printf("The result is:%d",result);
}
int disp_rsum()
{
    int sum=0;
    for(int i=6;i>=0;i--)
    {
        sum=sum+i;
    }
    return sum;
}
