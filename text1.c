#include <stdio.h>
int main() {
    int num;
    do {
        printf("Enter a number greater than 0: ");
        scanf("%d", &num);
    } while (num <= 0);  // Condition
    printf("You entered: %d\n", num);
    return 0;
}