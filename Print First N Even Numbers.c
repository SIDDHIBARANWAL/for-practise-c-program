#include <stdio.h>

int main() {
    int n, i, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; ; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            count++;
        }
        if (count == n)
            break;
    }

    printf("\n");
    return 0;
}