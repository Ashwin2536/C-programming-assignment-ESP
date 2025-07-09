#include<stdio.h>
void increment(int *b,int size);
int main()
{
    int a[4]={1,2,3,4};
    printf("Array:");
    for(int i=0;i<4;i++)
    {
        printf("%d ",a[i]);
    }
    increment(a,4);
    printf("\nNew Array:");
    for(int i=0;i<4;i++)
    {
        printf("%d ",a[i]);
    }
}
void increment(int *b,int size)
{
    for(int i=0;i<size;i++)
    {
        b[i]=b[i]+1;
        printf("\n");
        printf("%d ",b[i]);
    }

}
