#include<stdio.h>
int main()
{
    int a=1,b;
    loop: if (a<6)
    {
        printf("\n%d",a);
        a=a+1;
        goto loop;
    }
}
