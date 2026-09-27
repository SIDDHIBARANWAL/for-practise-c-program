#include <stdio.h>
int main() {
    int count = 0;
    do {
        printf("This is an infinite loop. Count: %d\n", count++);
        if (count == 8) break;  // Exits loop after 5 iterations
    } while (1);
    return 0;
}