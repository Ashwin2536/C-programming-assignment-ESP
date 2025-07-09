#include<stdio.h>
int check_last_digit_odd(int);
int main()
{
    int num,result;
    printf("Enter the number: ");
    scanf("%d",&num);
    result=check_last_digit_odd(num);
    printf("The result is:%d",result);
}
int check_last_digit_odd(int num)
{
    int temp,count=1,digit,last_digit;
    last_digit=num%10;
    if(last_digit%2==0)
        {
            return num;
        }
    else
    {
        temp=num;
        while(num>10)
        {
            count=count*10;
            num=num/10;
        }
        digit=num-1;
        digit=digit*count+(temp%count);
    }
    return digit;
}
