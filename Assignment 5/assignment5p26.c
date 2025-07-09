#include<stdio.h>
int main()
{
    int a,b,i,c=0;
    for(i=1000;i<10000;i++)
    {
        a=i%7;
        b=i%9;
        if(a==0&&b==0)
            printf("\n%d",i);
    }

}
