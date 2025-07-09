#include<stdio.h>
int main()
{
    int a[50],size=0,j=0;
    char b[51];
    printf("Enter number: ");
    for(int i=0;i<50;i++)
    {
        a[i]=9;
        //scanf("%d",&a[i]);
        size++;
    }
    printf("\nArray:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<size;i++)
    {
        b[j++]=a[i]+'0';
    }
    b[j]='\0';
    printf("\nAnswer:%s",b);
}
