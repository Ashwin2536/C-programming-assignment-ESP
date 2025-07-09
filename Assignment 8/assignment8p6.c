#include<stdio.h>
int disp_sum_all_digits(int );
int main()
{
    int num,result;
    printf("Enter the number: ");
    scanf("%d",&num);
    result=disp_sum_all_digits(num);
    printf("The result is:%d",result);
}
int disp_sum_all_digits(int num)
{
    int a,count=0;
    while(num!=0)
    {
        a=num%10;
        count=count+a;
        num=num/10;
    }
    return count;
}
