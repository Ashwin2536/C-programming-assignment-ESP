#include<stdio.h>
int main()
{
    int a;
    int *b;
    printf("Enter the number a:");
    scanf("%d",&a);
    printf("Original value:%d",a);
    printf("\nAddress of a:%p",(void*)&a);
    printf("\nAddress of a:%d",&a);
    b=&a;
    printf("\nAddress of *b:%p",(void*)b);
    *b=*b+10;
    printf("\nVariable *b:%d",*b);
    printf("\nVariable a:%d",a);
}
