#include<stdio.h>
void arrange_ascend(int *a);
int main()
{
    int i=1;
    arrange_ascend(&i);
    //printf("%d\n",i);
    return 0;
}
void arrange_ascend(int *a)
{
    while(*a<=5)
    {
        printf("%d\n",*a);
        *a=*a+1;
    }
}
