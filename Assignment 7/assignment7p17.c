#include<stdio.h>
void check_prime_and_sum14();
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    check_prime_and_sum14(num);
}
void check_prime_and_sum14(int num)
{
    int b=1,i,c,d,sum=0;
    if(num<2)
        b=0;
    c=num;
    while(c!=0)
        {
            d=c%10;
            sum=sum+d;
            c=c/10;
        }
    for(i=2;i<num;i++)
        {
            if(num%i==0)
                {
                    b=0;
                    break;
                }
        }
if(b==1&&sum==14)
    printf("%d is prime",num);
if(b==1&&sum!=14)
    printf("%d is prime but sum of digit is not 14",num);
if(b==0&&sum==14)
    printf("%d is not prime but sum of digit is 14",num);
if(b==0&&sum!=14)
    printf("%d is not prime and sum of digit is not 14",num);
}
