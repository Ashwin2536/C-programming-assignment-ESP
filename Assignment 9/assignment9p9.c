#include<stdio.h>
int main()
{
    int i,j=0,number[5],odd[5];
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&number[i]);
    }
    for(i=0;i<5;i++)
    {
        if(number[i]%2!=0)
        {
            odd[j]=number[i];
            j++;
        }
    }
    printf("New array: \n");
    for(int i=0;i<j;i++)
    {
        printf("%d ",odd[i]);
    }
}

