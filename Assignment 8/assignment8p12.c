#include<stdio.h>
int disp_total_2digit_odd(int);
int main()
{
    int num,result;
    printf("Enter the number:");
    scanf("%d",&num);
    result=disp_total_2digit_odd(num);
    printf("The result is:%d",result);
}
int disp_total_2digit_odd(int num)
{
    int temp,count=0;
    while(num>10)
    {
        temp=num%100;
        if(temp%2!=0)
            count++;
        num=num/10;
    }
    return count;
}
