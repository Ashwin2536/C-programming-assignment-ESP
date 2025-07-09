#include<stdio.h>
void disp_total_odd_digits(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    disp_total_odd_digits(num);
}
void disp_total_odd_digits(int num)
{
   int a,count=0;
   while(num!=0)
   {a=num%10;
   if(a%2!=0)
        count++;
   num=num/10;
   }
   printf("%d",count);
}
