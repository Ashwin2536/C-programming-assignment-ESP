#include<stdio.h>
void disp_total_2digit_odd(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    disp_total_2digit_odd(num);
}
void disp_total_2digit_odd(int num)
{
    int a,count=0;
    while(num>10)
    {
        a=num%100;
        if(a%2!=0)
            count++;
        num=num/10;
    }
    printf("%d",count);
}
