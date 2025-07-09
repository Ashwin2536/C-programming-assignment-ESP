#include<stdio.h>
int main()
{
    int i;
    for (i=100;i<1000;i++)
    {
        if(i%10+i/100==(i/10)%10&&i%10==5)
            printf("\n%d",i);
    }
}
