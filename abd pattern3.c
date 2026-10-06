#include <stdio.h>

int main(void) {
    char letter = 'A';

    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%c", letter++);
        }
        printf("\n");
    }         

    return 0;
}