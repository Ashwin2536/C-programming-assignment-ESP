#include<stdio.h>
int disp_interchange_first_last_digit(int);
int main()
{
    int num,result;
    printf("Enter the number: ");
    scanf("%d",&num);
    result=disp_interchange_first_last_digit(num);
    printf("The result is:%d",result);
}
int disp_interchange_first_last_digit(int num)
{
    int first,last,interchange,temp,count=1,middle_part;
    last=num%10;
    temp=num;
    while(temp>10)
    {
        count=count*10;
        temp=temp/10;
    }
    first=temp;
    middle_part=num%count;
    middle_part=middle_part/10;
    interchange=last*count+middle_part*10+first;
    return interchange;
}
