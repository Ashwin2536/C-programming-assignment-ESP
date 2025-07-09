#include<stdio.h>
int main()
{
    int a[3],b[3],carry=0;
    printf("Enter array:\n");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<3;i++)
    {
        int sum =a[i]+carry;
        b[i]=sum%10;
        carry=sum/10;
    }
    b[0]=b[0]+carry;
    printf("\nNew array:");
    for(int i=0;i<3;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
