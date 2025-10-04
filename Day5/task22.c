#include <stdio.h>

int main() {
    int age;
    float fare;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter full bus fare: ");
    scanf("%f", &fare);

    if (age < 12) {
        printf("Bus fare = %.2f (Half fare for children)\n", fare / 2);
    }
    else if (age >= 60) {
        printf("Bus fare = %.2f (70%% of full fare for senior citizens)\n", fare * 0.70);
    }
    else {
        printf("Bus fare = %.2f (Full fare)\n", fare);
    }

    return 0;
}
