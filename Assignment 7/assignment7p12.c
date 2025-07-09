#include<stdio.h>
void disp_sum_all_digits();
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    disp_sum_all_digits(num);
}
void disp_sum_all_digits(int num)
{
    int sum=0;int a;
    while(num!=0)
    {
        a=num%10;
        sum=sum+a;
        num=num/10;
    }
    printf("%d",sum);
}
