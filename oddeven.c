//WAP to print the given number is odd or even.
#include <stdio.h>

int main() {
    int num;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is divisible by 2
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}