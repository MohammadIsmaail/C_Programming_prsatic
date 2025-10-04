#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    if (year < 1 || month < 1 || month > 12 || day < 1) {
        printf("Invalid date!\n");
    }
    else if ((month == 1 || month == 3 || month == 5 || month == 7 ||
              month == 8 || month == 10 || month == 12) && day <= 31) {
        printf("Valid date.\n");
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30) {
        printf("Valid date.\n");
    }
    else if (month == 2 && day <= 28) {   // ignoring leap year logic
        printf("Valid date.\n");
    }
    else {
        printf("Invalid date!\n");
    }

    return 0;
}
