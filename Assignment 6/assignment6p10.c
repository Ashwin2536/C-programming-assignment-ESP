#include<stdio.h>
int main()
{
    int n=99;
      while(n<1000)
        {
            n++;
            if(n%10+n/100==7)
             if((n%100)/10==7)
               printf("\n%d",n);
        }
}
