#include <stdio.h>

int main() {
    int month, year;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // For February, also take year to check leap year
    if (month == 2) {
        printf("Enter year: ");
        scanf("%d", &year);
    }

    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("This month has 31 days.\n");
            break;

        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("This month has 30 days.\n");
            break;

        case 2:  // February
            // Leap year condition
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