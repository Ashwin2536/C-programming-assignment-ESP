#include<stdio.h>
int main()
{
    char a[51],b[51];
    int size=0,j=0,i=0;
    printf("Enter number: ");
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        size++;
    }
    printf("%d",size);
    while(a[i]!='\0')
    {
        b[j++]=a[i++];
    }
    for(int j=0;j<size/2;j++)
    {
        char temp=b[j];
        b[j]=b[size-j-1];
        b[size-j-1]=temp;
    }
    b[j]='\0';
    printf("\n%s",b);
}
