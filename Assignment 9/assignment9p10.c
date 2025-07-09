#include<stdio.h>
int main()
{
    int i,j,number[5],num[5],k=0;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&number[i]);
    }
    for(i=0;i<5;i++)
    {
        if(number[i]<2){
            num[k]=number[i];
            k++;
        }
        else
        {
            for(j=2;j<number[i];j++)
            {
                if(number[i]%j==0)
                   {
                    num[k]=number[i];
                    k++;
                    break;
                   }
            }
        }
    }
    printf("New array After removing prime:\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",num[i]);
    }
}
