#include<stdio.h>
void disp_LCM3(int ,int,int );
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    disp_LCM3(num1,num2,num3);
}
void disp_LCM3(int num1,int num2,int num3)
{
    int c,i;
    c = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    for(i=c;;i++)
    {
        if(i%num1==0&&i%num2==0&&i%num3==0)
        {
            printf("LCM of three number is:%d",i);
            break;
        }
    }
}

