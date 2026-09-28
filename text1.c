#include <stdio.h>

int main(void) {
    int choice;
    float temperature, converted;

    printf("Temperature Conversion\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);

        converted = (temperature * 9.0f / 5.0f) + 32.0f;
        printf("%.2f Celsius = %.2f Fahrenheit\n",
               temperature, converted);
    } 
    else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);

        converted = (temperature - 32.0f) * 5.0f / 9.0f;
        printf("%.2f Fahrenheit = %.2f Celsius\n",
               temperature, converted);
    } 
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}