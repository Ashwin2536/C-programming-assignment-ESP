#include<stdio.h>
int main()
{
    char a[51],b[51];
    int i=0,j=0;
    printf("Enter number: ");
    scanf("%s",a);
    while(a[i]=='0')
    {
        i++;
    }
    if(a[i]=='\0')
    {
        b[0]='0';
        b[1]='\0';
    }
    else
    {
        while(a[i]!='\0')
        {
            b[j++]=a[i++];
        }
        b[j]='\0';
    }
    printf("%s",b);
}
