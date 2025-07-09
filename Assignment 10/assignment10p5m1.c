#include <stdio.h>

int main() {
    int number;// The integer we want to convert
    char str[20];
    printf("Enter the integer: ");
    scanf("%d",&number);                   // Character array to hold the string result

    sprintf(str, "%d", number);     // Convert integer to string and store in str

    printf("The integer as a string is: %s\n", str);

    return 0;
}

