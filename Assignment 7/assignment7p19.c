#include<stdio.h>
void middle_2digits_prime(int);
int main()
{
    int num;
    printf("Enter any four digit number: ");
    scanf("%d",&num);
    middle_2digits_prime(num);
}
void middle_2digits_prime(int num)
{
    int middle_digits,i,a=1;
    middle_digits=(((num/100)%10)*10+((num%100)/10));
    for(i=2;i<middle_digits;i++)
    {
        if(middle_digits%i==0)
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
