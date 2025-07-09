#include<stdio.h>
int main()
{
    int i,num[100],sum_arr[100],j,k;
    for(i=0;1;i++)
    {
        printf("NUMBER %d:",i+1);
        scanf("%d",&num[i]);
        if(num[i]==0)
            break;
    }
    printf("The new array is:\n");
    for(int j=0;j<i;j++)
    {
        int temp=num[j];
        int sum=0;
        while(temp!=0)
        {
            sum=sum +(temp%10);
            temp=temp/10;
        }
        sum_arr[j]=sum;
        printf("%d ",sum_arr[j]);
    }
    for(k=0;k<i-1;k++)
    {
        for(j=k+1;j<i;j++)
        {
            if(sum_arr[k]>sum_arr[j])
            {
                int temp=sum_arr[k];
                sum_arr[k]=sum_arr[j];
                sum_arr[j]=temp;
            }
        }
    }
    printf("\nSorted array:\n");
    for(k=0;k<i;k++)
    {
        printf("%d ", sum_arr[k]);
    }
    return 0;
}

