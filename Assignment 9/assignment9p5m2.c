#include<stdio.h>
int main()
{
    int a[5],temp,i,j;
    printf("Enter  5 numbers:\n");
    for(i=0;i<5;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    //Bubble Sort Algorithm
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array: \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
