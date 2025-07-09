#include<stdio.h>
void disp_2digit_odd_below20();
int main()
{
    disp_2digit_odd_below20();
}
void disp_2digit_odd_below20()
{
    for(int i=10;i<=20;i++)
    {
        if(i%2!=0)
            printf("\n%d",i);
    }
}
