#include<stdio.h>
int disp_reverse_number(int );
int main()
{
    int num,result;
    printf("Enter the number:");
    scanf("%d",&num);
    result=disp_reverse_number(num);
    printf("The result is:%d",result);
}
int disp_reverse_number(int num)
{
    int rnum=0;
    while(num!=0)
    {
        rnum=rnum*10+(num%10);
        num=num/10;
    }
    return rnum;
}
