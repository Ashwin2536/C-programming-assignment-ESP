#include<stdio.h>
int disp_biggest_4digit_div7_9();
int main()
{
    int result;
    result=disp_biggest_4digit_div7_9();
    printf("%d",result);
}
int disp_biggest_4digit_div7_9()
{
    int i;
    for(i=10000;i>1000;i--)
    {
        if(i%7==0&&i%9==0)
        {
            return i;
        }
    }
}

