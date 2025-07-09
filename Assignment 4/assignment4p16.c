#include <stdio.h>

int main() {
    int num, a = 2; // Using 'a' instead of 'i' as loop variable
    int b = 1; // Assume the number is prime

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        b = 0; // 0 and 1 are not prime numbers
        goto result;
    }

check:
    if (a * a > num)
        goto result;
    if (num % a == 0) {
        b = 0;
        goto result;
    }
    a++; // Incrementing 'a' instead of 'i'
    goto check;

result:
    if (b)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
