#include<stdio.h>
void find_2digit_odd_sum7(int *a);
int main()
{
    int i=10;
    find_2digit_odd_sum7(&i);
}
void find_2digit_odd_sum7 (int *a)
{
    while(*a<100)
    {
        if(*a%2!=0)
        {
            if(*a%10+*a/10==7)
            {
                printf("%d ",*a);
            }
        }
        *a=*a+1;
    }
}
