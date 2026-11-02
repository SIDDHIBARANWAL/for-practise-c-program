#include <stdio.h>

int main(void) {
    int number, i, isPrime = 1;

    printf("Enter a no: ");
    scanf("%d", &no);

    if (no < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= no; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime no.\n", number);
    else
        printf("%d is not a prime no.\n", number);

    return 0;
}