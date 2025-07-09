#include<stdio.h>
int main()
{
    int a,b,i=1000;
    while(i<10000)
    {
        a=i%7;
        b=i%9;
        if(a==0&&b==0)
            {
                printf("\n%d",i);
            }
        i++;
    }
}
