#include<stdio.h>
int main()
{
    int numbers[5];
    int sum=0;
    printf("Enter 5 numbers:\n");
    for(int i=0;i<5;i++)
    {
        printf("Number:");
        scanf("%d",&numbers[i]);
        sum=sum+numbers[i];
    }
    printf("The sum of all numbers is:%d",sum);
}
