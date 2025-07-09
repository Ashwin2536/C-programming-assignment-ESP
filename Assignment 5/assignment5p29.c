#include<stdio.h>
int main()
{
    int a,b,c,x,i;
    printf("Enter three numbers:\n");
    scanf("\n%d  \n%d  \n%d",&a,&b,&c);
    if(a>b&&a>c)
        x=a;
    if(b>a&&b>c)
        x=b;
    else
        x=c;
    for(i=x;;i++)
    {
        if(i%a==0&&i%b==0&&i%c==0)
        {
            printf("The LCM is:%d",i);
            break;
        }
    }
}
