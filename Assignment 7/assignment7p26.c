#include<stdio.h>
void disp_biggest_4digit_div7_9();
int main()
{
    disp_biggest_4digit_div7_9();
}
void disp_biggest_4digit_div7_9( )
{
    for(int i=1000;i<10000;i++)
    {
        if(i%7==0&&i%9==0)
            printf("%d\n",i);
    }
}
