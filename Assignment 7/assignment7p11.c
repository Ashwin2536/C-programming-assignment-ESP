#include<stdio.h>
void count_total_digits();
int main()
{
    count_total_digits();
}
void count_total_digits()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int count=0;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    printf("%d",count);
}
