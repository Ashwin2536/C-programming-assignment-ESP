#include<stdio.h>
int disp_LCM3(int,int,int);
int main()
{
    int num1,num2,num3,result;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    result=disp_LCM3(num1,num2,num3);
    printf("The result is:%d",result);
}
int disp_LCM3(int num1,int num2,int num3)
{
    int max,i;
    max=(num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
    for(i=max;;i++)
    {
        if(i%num1==0&&i%num2==0&&i%num3==0)
        {
            return i;
        }
    }
}
