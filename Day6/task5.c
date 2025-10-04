// 5. WAP to calculate total electricity bill via input total unit consumed.
// For the first 100 units : 7rs/unit
// For next 100 unit : 101-200 : 7.5rs/unit
// For next 100 unit : 201 – 299 : 8rs/unit
// For rest all : 10rs/unit
#include <stdio.h>
int main() {
    float total_units, total_bill;
    printf("Enter total units consumed: ");
    scanf("%f", &total_units);

    if (total_units <= 100) {
        total_bill = total_units * 7;
    } else if (total_units <= 200) {
        total_bill = (100 * 7) + ((total_units - 100) * 7.5);
    } else if (total_units <= 299) {
        total_bill = (100 * 7) + (100 * 7.5) + ((total_units - 200) * 8);
    } else {
        total_bill = (100 * 7) + (100 * 7.5) + (99 * 8) + ((total_units - 299) * 10);
    }

    printf("Total electricity bill: %.2f\n", total_bill);
    return 0;
}