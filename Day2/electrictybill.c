#include<stdio.h>
int main() {
    int units;
    float per_unit_charge;

    printf("Enter total electricity units consumed: ");
    scanf("%d", &units);

    printf("Enter per unit charge: ");
    scanf("%f", &per_unit_charge);

    float total_bill = units * per_unit_charge;
    float discount = total_bill * 0.10;
    float total = total_bill - discount;

    printf("Total electricity bill %f ", total);

   
}
