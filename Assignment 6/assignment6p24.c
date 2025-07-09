#include<stdio.h>
int main()
{
    int n,a,b,i,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>9)
    {
        i=3;
        while(i<10)
        {
            a=i*i;
            b=n%100;
            if(a==b)
            {
                c++;
            }
            i++;
        }
        n=n/10;
    }
    printf("%d",c);
}
