#include<stdio.h>
int main()
{
    int count=0,j=0;
    char a[51];
    printf("Enter number up to 50 digits: ");
    scanf("%s",a);
    for(int i=0;a[i]!=0;i++)
    {
        j++;
        if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
        {
            count++;
        }
    }
    if(count==j)
    {
        printf("The number is VALID:%s",a);
    }
    else
    {
        printf("It is INVALID");
    }
}
