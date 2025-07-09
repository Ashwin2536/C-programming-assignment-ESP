#include<stdio.h>
int main()
{
    int a[50],b[50],c[51],carry=0;
    for(int i=0;i<50;i++)
    {
        a[i]= 9;
        b[i]=0;
    }
    b[49]=1;
    for(int i=0;i<50;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for(int i=0;i<50;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    for(int i=49;i>=0;i--)
    {
        int sum = a[i]+b[i]+carry;
        c[i+1]=sum%10;
        carry=sum/10;
    }
    c[0]=carry;
    printf("Sum:");
    int start = (c[0] == 0) ? 1 : 0;
    for (int i=start;i<51;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}
