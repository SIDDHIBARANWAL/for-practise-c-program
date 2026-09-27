#include <stdio.h>
int main() {
    int num = 5, factorial = 1;
    do {
        factorial *= num;
        num--;
    } while (num > 0);
    printf("Factorial: %d\n", factorial);
    return 0;
}