#include<stdio.h>
int main()
{
    char a[100];
    int length=0;
    printf("Enter the string: ");
    scanf("%s",&a);
    for(int i=0;a[i]!=0;i++)
    {
        length++;
    }
    printf("The length is:%d",length);
}
