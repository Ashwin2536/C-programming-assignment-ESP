#include <stdio.h>

int main() {
    int arr[5];
    int i, j, temp;

    // Input: Get 5 numbers
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Directly compare all pairs (not efficient for large arrays)
    //selection sort algorithm
    for(i = 0; i < 4; i++) {
        for(j = i+1; j < 5; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output sorted array
    printf("Numbers in ascending order:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
