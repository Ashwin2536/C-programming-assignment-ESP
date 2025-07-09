#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    c=a>b?a:b;
    for(i=c;;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("LCM OF TWO NUMBERS IS %d",i);
            break;
        }
    }
}
