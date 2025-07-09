#include<stdio.h>
int main()
{
    int n=9;
    while(n<100)
    {
        n++;
        if(n%2!=0)
           if(n%10+n/10==7)
            printf("\n%d",n);
    }
}
