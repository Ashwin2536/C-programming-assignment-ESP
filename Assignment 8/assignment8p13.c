#include<stdio.h>
int disp_single_digit_square(int);
int main()
{
    int num,result;
    printf("Enter the number:");
    scanf("%d",&num);
    result=disp_single_digit_square(num);
    printf("The result is:%d",result);
}
int disp_single_digit_square(int num)
{
    int square,digit,count=0;
    while(num!=0)
    {
        for(int i=0;i<4;i++)
            {
                square=i*i;
                digit=num%10;
                if(square==digit)
                    {
                        count++;
                    }

            }
        num=num/10;
    }
    return count;
}
