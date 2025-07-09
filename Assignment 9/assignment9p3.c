#include<stdio.h>
int main()
{
    int numbers[5];
    int i;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        printf("number %d: ",i+1);
        scanf("%d",&numbers[i]);
    }
    int smallest=numbers[0];
    for(i=1;i<5;i++)
    {
        if(numbers[i]<smallest)
        {
            smallest=numbers[i];
        }
    }
    printf("The smallest is:%d",smallest);
}
