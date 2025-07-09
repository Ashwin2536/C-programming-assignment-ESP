#include<stdio.h>
int main()
{
    int number[5];
    int i;
    printf("Enter 5 numbers: \n");
    for(i=0;i<5;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&number[i]);
    }
    int biggest=number[0];
    for(i=1;i<5;i++)
    {
        if(number[i]>biggest)
            biggest=number[i];
    }
    printf("The biggest is: %d",biggest);
}
