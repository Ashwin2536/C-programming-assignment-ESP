#include<stdio.h>
void disp_lcm2(int,int);
int main()
{
    int num1,num2;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    disp_lcm2(num1,num2);
}
void disp_lcm2(int num1,int num2)
{
    int c,i;
    c=num1>num2?num1:num2;
    for(i=c;;i++)
    {
        if(i%num1==0&&i%num2==0)
        {
            printf("LCM of two number is :%d",i);
            break;
        }
    }
}
