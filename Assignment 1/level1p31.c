#include<stdio.h>
int main()
{
    int n,c;
    printf("Enter the number: ");
    scanf("%d",&n);
    if ((n%10+(n/10)/10+(n/10)%10)<10)
    {
        c=n%10+(n/10)/10+(n/10)%10;
        printf("%d",c);
    }
    else if((n/10)/10+(n/10)%10<10)
        {
            c=(n/10)/10+(n/10)%10;
            printf("%d",c);
            }
    else{
        c=n%10;
        printf("%d",c);
    }
}
