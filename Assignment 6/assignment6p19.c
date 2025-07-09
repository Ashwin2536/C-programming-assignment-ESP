#include<stdio.h>
int main()
{
    int n,a,b,c,i=2,d=1;
    printf("Enter the number: "); //Enter 4 digit number
    scanf("%d",&n);
    a=(n/10)%10;
    b=(n/100)%10;
    c=b*10+a;
    while(i<c)
    {
        if(c%i==0)
        {
            d=0;
            break;
        }
        i++;
    }
    if(d)
        printf("Prime %d",c);
    else
        printf("Not prime %d",c);
}
