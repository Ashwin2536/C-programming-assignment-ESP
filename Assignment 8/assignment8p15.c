#include<stdio.h>
int disp_single_digit_prime(int );
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
    int temp,count=0;
    while(num!=0)
    {
            temp=num%10;
            if(temp==2||temp==3||temp==5||temp==7)
                count++;
            num=num/10;
    }
    return count;
}
