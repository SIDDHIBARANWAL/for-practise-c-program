#include <stdio.h>

int main() {
    int month, year;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if (month == 2) {
        printf("Enter year: ");
        scanf("%d", &year);
    }

    switch (month) {
        case 1: 
        case 3:  
        case 5:  
        case 7:  
        case 8:  
        case 10: 
        case 12: 
            printf("This month has 31 days.\n");
            break;

        case 4:
        case 6:  
        case 9:
        case 11:
            printf("This month has 30 days.\n");
            break;

        case 2: 
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                printf("This month has 29 days (leap year).\n");
            else
                printf("This month has 28 days.\n");
            break;

        default:
            printf("Invalid month number! Enter a number between 1 and 12.\n");
    }

    return 0;
}