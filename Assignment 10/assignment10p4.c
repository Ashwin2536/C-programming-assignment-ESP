#include <stdio.h>

int main() {
    char a[100];    // Using 'a' instead of 'str'
    int number = 0;

    printf("Enter a number as a string: ");
    scanf("%s", a);  // Reading input into 'a'

    for (int i = 0; a[i] != 0; i++) {
        number = number * 10 + (a[i] - '0');
    }

    printf("The integer value is: %d\n", number);

    return 0;
}

