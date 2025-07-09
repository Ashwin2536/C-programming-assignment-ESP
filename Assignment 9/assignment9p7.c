#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    printf("Enter 5 numbers:\n");
    for (i=0;i<5;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5-1;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
