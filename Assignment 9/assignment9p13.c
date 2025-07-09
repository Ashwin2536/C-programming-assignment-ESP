#include<stdio.h>
int main()
{
    int i,num[100];
    for(i=0;1;i++)
    {
        printf("Number %d:",i+1);
        scanf("%d",&num[i]);
        if(num[i]==0)
        {
            if(num[0]==num[i-1])
            {
                printf("Success");
            }
            else
                printf("Failure");
            break;
        }
    }
}
