#include<stdio.h>
int count_total_digits(int );
int main()
{
    int num,result;
    printf("Enter the number:");
    scanf("%d",&num);
    result=count_total_digits(num);
    printf("The result is:%d",result);
}
int count_total_digits(int num)
{
    int count=0;
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    return count;
}
