#include <stdio.h>

int main() {
    int hour, minute;

    printf("Enter time in 24-hour format (HH MM): ");
    scanf("%d %d", &hour, &minute);

    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        printf("Invalid time format!\n");
    } else {
        if (hour == 0) {
            printf("12:%02d AM\n", minute);
        }
        else if (hour < 12) {
            printf("%d:%02d AM\n", hour, minute);
        }
        else if (hour == 12) {
            printf("12:%02d PM\n", minute);
        }
        else {
            printf("%d:%02d PM\n", hour - 12, minute);
        }
    }

    return 0;
}
