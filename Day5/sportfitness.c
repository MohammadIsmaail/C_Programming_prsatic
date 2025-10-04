#include <stdio.h>

int main() {
    int age, height, fitness;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter height (cm): ");
    scanf("%d", &height);
    printf("Enter fitness score (0-100): ");
    scanf("%d", &fitness);

    if (age >= 18 && height >= 160 && fitness >= 70) {
        printf("Eligible for sports try-out.\n");
    }
    else {
        printf("Not eligible for sports try-out.\n");
    }

    return 0;
}
