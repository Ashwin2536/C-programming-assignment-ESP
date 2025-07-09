#include<stdio.h>
int main()
{
    int num,temp,count=0,i;
    printf("Enter the number:");
    scanf("%d",&num);
    i=1;
    while(num>9)
    {
        temp=num%100;
        if(temp%2!=0)
        {
            count++;
        }
        num=num/10;
        i++;
    }
    printf("%d",count);
}
