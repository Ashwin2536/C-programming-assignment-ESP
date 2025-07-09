#include<stdio.h>
void disp_two_digit_square(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    disp_two_digit_square(num);
}
void disp_two_digit_square(int num)
{
    int a,i,b,count=0;
    for(i=4;i<10;i++)
    {
        a=i*i;
        int temp=num;
        while(temp>=10){
        b=temp%100;
        if(a==b)
            count++;
        temp=temp/10;
        }
    }
    printf("%d",count);
}
