#include<stdio.h>
void disp_single_digit_square(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    disp_single_digit_square(num);
}
void disp_single_digit_square(int num)
{
    int a,count=0;
    while(num!=0)
    {
        a=num%10;
        if(a==1||a==4||a==9)
            count++;
        num=num/10;
    }
    printf("%d",count);
}
