#include <stdio.h>

int main(void) {
    int a, b, result;
    int count = 0;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    result = a;

    while (count < 1) {
        result = result - b;
        count++;
    }

    printf("Difference = %d\n", result);

    return 0;
}