#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    
    // Handle negative numbers
    int is_negative = num < 0;
    if (is_negative) {
        num = -num;
    }
    
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    if (is_negative) {
        reversed = -reversed;
    }
    
    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}