#include<stdio.h>
int main()
{
    int i;
    for(i=10;i<100;i++)
    {
        if(i%10+i/10==6&&i%2==0)
            printf("\n%d",i);
    }
}
