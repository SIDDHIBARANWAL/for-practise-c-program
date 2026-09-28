#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int left, right, palindrome = 1;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    left = 0;
    right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}