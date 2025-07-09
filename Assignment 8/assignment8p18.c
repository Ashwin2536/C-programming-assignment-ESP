#include<stdio.h>
int disp_LCM2(int , int);
int main()
{
    int num1,num2,result;
    printf("Enter the number: ");
    scanf("%d",&num1);
    printf("Enter the number: ");
    scanf("%d",&num2);
    result=disp_LCM2(num1,num2);
    printf("The result is:%d",result);
}
int disp_LCM2(int num1,int num2)
{
    int max,i;
    max=num1>num2?num1:num2;
    for(i=max;;i++)
    {
        if(i%num1==0&&i%num2==0)
        {
            return i;
        }
    }
}
