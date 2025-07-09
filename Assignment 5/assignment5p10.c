#include<stdio.h>
int main()
{
    int i;
    for(i=100;i<1000;i++)
    {
        if((i%10+i/100)==7)
            if((i/10)%10==7)
            printf("\n%d",i);
    }
}
