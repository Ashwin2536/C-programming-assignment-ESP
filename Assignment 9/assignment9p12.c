#include<stdio.h>
int main()
{
    int i,num[100],sum=0;
    for (i=0;1;i++)
    {
        printf("NUMBER %d:",i+1);
        scanf("%d",&num[i]);
        sum=sum+num[i];
        if(num[i]==0)
        {
            printf("Total numbers:%d\n",i);
            printf("Sum of number:%d\n",sum);
            break;
        }
    }
}
