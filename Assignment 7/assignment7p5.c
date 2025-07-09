#include<stdio.h>
void disp_odd();
void disp_odd()
{
    for(int i=0;i<=9;i++)
    {
        if(i%2!=0)
            printf("\n%d",i);
    }
}
int main()
{
    disp_odd();
}
