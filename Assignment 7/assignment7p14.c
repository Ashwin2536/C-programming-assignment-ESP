#include<stdio.h>
void disp_interchange_first_last_digit(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    disp_interchange_first_last_digit(num);
}
void disp_interchange_first_last_digit(int num)
{
    int a=1,b,c,d,i;
    i=num;
    b=num%10;
    while(i>10)
    {
        a=a*10;
        i=i/10;
    }
    c=(b*a)+(num%a)-b+(num/a);
    printf("%d",c);
}
