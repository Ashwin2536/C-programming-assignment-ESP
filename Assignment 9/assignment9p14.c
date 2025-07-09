#include<stdio.h>
void average(int num[] ,int i);
int main()
{
    int i,num[100],j=0;
    for(i=0;1;i++)
    {
        printf("Number %d:",i+1);
        scanf("%d",&num[i]);
        //++j;
        if(num[i]==0)
        {
            if(i%2!=0)
            {
                printf("Middle number is:%d",num[i/2]);
            }
            else
                {
                    average(num,i);
                }
            break;
        }
    }
}
void average(int num[] ,int i)
{
    int sum=0,average;
    for(int j=0;j<i;j++)
    {
        sum=sum+num[j];
    }
    average=sum/i;
    printf("Average is:%d",average);
}
