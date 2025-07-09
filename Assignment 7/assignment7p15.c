#include<stdio.h>
void check_last_digit_odd(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d",num);
    else
        check_last_digit_odd(num);
}
void check_last_digit_odd(int num)
{
    int a=1,i,b;
    i=num;
    while(i>10)
    {
        a=a*10;
        i=i/10;
    }
    b=(i-1)*a+(num%a);
    printf("%d",b);
}
