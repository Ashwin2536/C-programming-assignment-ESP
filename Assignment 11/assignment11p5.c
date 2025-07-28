#include <stdio.h>
void memcopy(int *x,int *y,int size);
int main()
{
    int a[5],b[5],size = 5;
    printf("Enter number:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    memcopy(a,b,size);
    printf("b array is \n");
    for(int j=0;j<size;j++)
    {
        printf("%d ",b[j]);
    }
}
void memcopy(int *x,int *y,int size)
{
    for(int k=0;k<size;k++)
    {
        y[k]=x[k];
    }
}
