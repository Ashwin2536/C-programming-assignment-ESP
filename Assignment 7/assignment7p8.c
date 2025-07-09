#include<stdio.h>
void disp_2digit_even_sum6();
int main()
{
    disp_2digit_even_sum6();
}
void disp_2digit_even_sum6()
{
    for(int i=10;i<100;i++)
    {
        if(i%2==0)
        {
            if(i%10+i/10==6)
                printf("\n%d",i);
        }
    }
}
