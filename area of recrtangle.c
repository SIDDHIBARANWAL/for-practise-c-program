#include <stdio.h>

int main() {
    int l, w;
    printf("Enter length and width: ");
    scanf("%d %d", &l, &w);
    int area = l * w;
    printf("Area of rectangle = %d\n", area);
    return 0;
}