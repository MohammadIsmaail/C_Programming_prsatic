#include<stdio.h>

int main() {
    float balance, amount;

    printf("Enter current balance: ");
    scanf("%f", &balance);

    printf("Enter amount to subtract: ");
    scanf("%f", &amount);

    if (amount > balance) {
        printf("Insufficient balance.\n");
    } else {
        balance -= amount;
        printf("New balance: %f\n", balance);
    }

    return 0;
}