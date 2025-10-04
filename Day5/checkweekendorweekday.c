#include<stdio.h>

int main() {
    int day;
    printf("Enter day number (1 for Monday, 7 for Sunday): ");
    scanf("%d", &day);

    if(day < 1 || day > 7) {
        printf("Invalid day number.\n");
    } else if(day == 6 || day == 7) {
        printf("It's a weekend.\n");
    } else {
        printf("It's a weekday.\n");
    }

   
}