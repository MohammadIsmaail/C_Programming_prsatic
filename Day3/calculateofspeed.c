#include <stdio.h>
int main() {
    float distance, time, speed;
    printf("Enter distance in km: ");
    scanf("%f", &distance);

    printf("Enter time (in hours): ");
    scanf("%f", &time);

    speed = distance / time;

    printf("Speed = %.2f km/h\n", speed);
}