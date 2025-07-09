#include<stdio.h>
int main()
{
    char a[51];
    int b[51],size=0;
    printf("Enter the number: ");
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        size++;
        b[i]=a[i]-'0';
    }
    for(int j=0;j<size;j++)
    {
        printf("%d",b[j]);
    }
}
