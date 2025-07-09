#include<stdio.h>
int main()
{
    int n=99;
    while(n<1000)
    {
        n++;
        if(n%10+n/100==9)
            if(n%10==5)
              if((n%100)/10==9)
               printf("\n%d",n);
    }
}
