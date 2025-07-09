#include<stdio.h>
void disp_2digit_even_sum6(int );
int main()
{
    int num;
    num=123456789;
    disp_2digit_even_sum6(num);
}
void disp_2digit_even_sum6(int num)
{
    int temp,count=0;
    while(num!=0)
    {
        temp=num%10;
        if(temp==2||temp==3||temp==5||temp==7)
        {
            count++;
        }
        num=num/10;
    }
    printf("%d",count);
}
