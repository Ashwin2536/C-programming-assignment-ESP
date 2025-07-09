#include<stdio.h>
int main()
{
    int a,count=0;
    char b[100];
    printf("Enter the number: ");
    scanf("%d",&a);
    for(int i=0;a!=0;i++)
    {
        int digit=a%10;
        b[i]=digit+'0';
        a=a/10;
        count++;
    }
    b[count]='\0';
    for(int j=0;j<count/2;j++)
    {
        char temp = b[j];
        b[j]=b[count-j-1];
        b[count-j-1]=temp;
    }
    for(int k=0;k<count;k++)
    {
        printf("%c\n",b[k]);
    }
}
