#include<stdio.h>
void check_first_2digits_prime(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    check_first_2digits_prime(num);
}
void check_first_2digits_prime(int num)
{
    int two_digits,i,a=1;
    two_digits=num%100;
    for(i=2;i<two_digits;i++)
    {
        if(two_digits%i==0)
        {
            a=0;
            break;
        }
    }
    if(a)
        printf("%d is prime",num);
    else
        printf("%d is not prime",num);
}
