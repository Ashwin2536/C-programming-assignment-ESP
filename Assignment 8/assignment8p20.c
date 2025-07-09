#include<stdio.h>
int disp_count_HCF2(int , int );
int main()
{
    int num1,num2,result;
    printf("Enter 1st number:");
    scanf("%d",&num1);
    printf("Enter 2nd number:");
    scanf("%d",&num2);
    result=disp_count_HCF2(num1,num2);
    printf("The result is:%d",result);
    return 0;
}
int disp_count_HCF2(int num1,int num2)
{
    int c,i,a=1;
    c=num1<num2?num1:num2;
    for(i=1;i<=c;i++)
    {
        if(num1%i==0&&num2%i==0)
        {
            a=i;
        }
    }
    return a;
}
