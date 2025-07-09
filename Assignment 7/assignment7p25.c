#include<stdio.h>
void disp_single_digit_prime(int );
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    disp_single_digit_prime(num);
}
void disp_single_digit_prime(int num)
 {
    int b,count=0;
    while(num!=0)
    {
       b=num%10;
       if(b==2||b==3||b==5||b==7)
       {
           count++;
       }
       num=num/10;
    }
    printf("%d",count);
  }

