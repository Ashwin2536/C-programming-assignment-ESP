#include<stdio.h>
int disp_2digit_odd_sum_tens7();
int main()
{
    int result;
    result = disp_2digit_odd_sum_tens7();
    printf("The result is:%d",result);
}
int disp_2digit_odd_sum_tens7()
{
    int sum=0;
    for (int i=10;i<100;i++)
    {
        if(i/10==7&&i%2!=0)
            sum=sum+i;
    }
    return sum;
}
