#include<stdio.h>
int disp_total_odd_digit(int);
int main()
{
    int num,result;
    printf("Enter the number: ");
    scanf("%d",&num);
    result=disp_total_odd_digit(num);
    printf("The result is:%d",result);
}
int disp_total_odd_digit(int num)
{
    int count=0,last_digit;
    while(num!=0)
    {
        last_digit=num%10;
        if(last_digit%2==0)
            count++;
        num=num/10;
    }
    return count;
}
