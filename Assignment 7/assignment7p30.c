#include<stdio.h>
void disp_count_HCF2(int ,int );
int main()
{
    int num1,num2;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&num1,&num2);
    disp_count_HCF2(num1,num2);
}
void disp_count_HCF2(int num1,int num2)
{
    int a,c,i=1;
    c=num1<num2?num1:num2;
    while(i<=c)
    {
        if(num1%i==0&&num2%i==0)
        {
            a=i;
        }
        i++;
    }
    printf("%d",a);
}
