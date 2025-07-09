#include<stdio.h>
int disp_single_digit_prime(int);
int main()
{
    int num,result;
    printf("Enter the number:");
    scanf("%d",&num);
    result=disp_single_digit_prime(num);
    printf("The result is:%d",result);
}
int disp_single_digit_prime(int num)
{
    int last_digit,count=0;
    while(num>0)
    {
    last_digit=num%10;
    if(last_digit==2||last_digit==3||last_digit==5||last_digit==7)
        count++;
    num=num/10;
    }
    return count;
}
