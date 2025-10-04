#include <stdio.h>

int main() {
    int speed;

    printf("Enter vehicle speed (km/h): ");
    scanf("%d", &speed);

    if (speed <= 60) {
        printf("Speed is within safe limits.\n");
    }
    else if (speed <= 80) {
        printf("Warning: Reduce your speed.\n");
    }
    else {
        printf("You are fined for overspeeding!\n");
    }

    return 0;
}
