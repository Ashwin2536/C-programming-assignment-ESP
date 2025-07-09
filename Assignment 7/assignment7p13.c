#include<stdio.h>
void disp_reverse_number(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    disp_reverse_number(num);
}
void disp_reverse_number(int num)
{
    int a;
    while (num!=0)
    {
        a=num%10;
        printf("%d",a);
        num=num/10;
    }
}

