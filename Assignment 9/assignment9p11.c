#include<stdio.h>
int reverse_num(int);
int main()
{
    int i,number[5],new_array[5];
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&number[i]);
    }
    for(i=0;i<5;i++)
    {
        new_array[i]=reverse_num(number[i]);
    }
    printf("New array with reversed number:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",new_array[i]);
    }
}
int reverse_num(int num)
{
    int reversed=0;
    while(num!=0)
    {
        reversed= reversed*10+num%10;
        num=num/10;
    }
    return reversed;
}
