#include <stdio.h>

int main() {
    int arr[10], i, smallest;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Smallest number = %d\n", smallest);

    return 0;
}