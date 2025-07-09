#include<Stdio.h>
int main()
{
    int numbers[5],sum=0,average;
    printf("Enter 5 numbers:\n");
    for(int i=0;i<5;i++)
    {
        printf("Nunber%d: ",i+1);
        scanf("%d",&numbers[i]);
        sum=sum+numbers[i];
    }
    average=sum/5;
    printf("The average is:%d",average);
}
