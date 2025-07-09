#include<stdio.h>
void check_prime();
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    check_prime(num);
}
void check_prime(int num)
{
    int b=1,i;
    if(num<2)
        b=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            b=0;
            break;
        }
    }
    if(b)
        printf("%d is prime",num);
    else
        printf("%d is not prime",num);
}
