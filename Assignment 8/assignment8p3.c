#include<stdio.h>
int disp_2digit_ones5();
int main()
{
    int result;
    result=disp_2digit_ones5();
    printf("The result is:%d",result);
}
int disp_2digit_ones5()
{
    int sum=0;
    for(int i=10;i<100;i++)
    {
        if(i%10==5)
        {
            sum=sum+i;
        }
    }
    return sum;
}
