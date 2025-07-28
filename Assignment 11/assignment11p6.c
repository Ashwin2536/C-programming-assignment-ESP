#include <stdio.h>
void strcopy(char *x,char *y);
int main()
{
    char a[6],b[6],size=6;
    printf("Enter string  : ");
    scanf("%s",&a);
    strcopy(a,b);
    printf("%s",b);
}
void strcopy(char *x,char *y)
{
    int i;
    for( i=0;x[i]!='\0';i++)
    {
        y[i]=x[i];
    }
    y[i]='\0';
}
