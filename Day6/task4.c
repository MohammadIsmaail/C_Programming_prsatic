// 4. WAP to calculate total electricity bill. Input previous reading of electricity and current reading of
// electricity and per unit charge and calculate total bill.

#include <stdio.h>

int main() {
    float previous_reading, current_reading, per_unit_charge, total_bill;
    printf("Enter previous reading (in units): ");
    scanf("%f", &previous_reading);
    printf("Enter current reading (in units): ");
    scanf("%f", &current_reading);
    printf("Enter per unit charge: ");
    scanf("%f", &per_unit_charge);

    // Calculate total bill
    total_bill = (current_reading - previous_reading) * per_unit_charge;

    printf("Total electricity bill: %.2f\n", total_bill);

    return 0;
}