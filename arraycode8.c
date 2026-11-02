#include <stdio.h>

int main() {
    int arr[10], i, key, found = 0;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (i = 0; i < 10; i++) {
        if (arr[i] == key) {
            printf("%d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("%d is not in the array\n", key);
    }

    return 0;
}