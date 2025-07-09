#include<stdio.h>
void disp_sum();
int main()
{
    disp_sum();
}
void disp_sum()
{
    int sum=0;
    for(int i=0;i<=5;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
