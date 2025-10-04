#include<stdio.h>

int main() {
    float dollar, rupee;
    float conversionRate = 83.0; // Example rate: 1 USD = 83 INR

    printf("Enter amount in US Dollars: ");
    scanf("%f", &dollar);

    rupee = dollar * conversionRate;

    printf("%.2f US Dollars = %.2f Indian Rupees\n", dollar, rupee);

    return 0;
}