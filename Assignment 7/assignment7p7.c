#include<stdio.h>
void disp_2digit_odd_sum7();
int main()
{
    disp_2digit_odd_sum7();
}
void disp_2digit_odd_sum7()
{
    for(int i=10;i<100;i++)
    {
        if(i%2!=0)
        {
            if(i%10+i/10==7)
                printf("\n%d",i);
        }
    }
}
