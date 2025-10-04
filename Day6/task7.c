// 7. WAP to calculate total bill of movie ticket booking.
// Input total person and per person ticket charge.
// If person : 1-5 : 10% discount on total + 18% GST
// If person : 6-8 : 12% discount for first 3 and for rest 15%discount and then 18% GST on total
// If : >8 : 15% discount for first 5 and for rest all 20% discount and then 18% GST on total
#include<stdio.h>
int main(){
    int total_person;
    float per_person_charge, total_bill;

    printf("Enter total number of persons: ");
    scanf("%d", &total_person);
    printf("Enter per person ticket charge: ");
    scanf("%f", &per_person_charge);

    total_bill = total_person * per_person_charge;

    if(total_person >= 1 && total_person <= 5) {
        total_bill = total_bill - (total_bill * 0.10); // 10% discount
    } else if(total_person >= 6 && total_person <= 8) {
        total_bill = total_bill - (3 * per_person_charge * 0.12); // 12% discount for first 3
        total_bill = total_bill - ((total_person - 3) * per_person_charge * 0.15); // 15% discount for rest
    } else if(total_person > 8) {
        total_bill = total_bill - (5 * per_person_charge * 0.15); // 15% discount for first 5
        total_bill = total_bill - ((total_person - 5) * per_person_charge * 0.20); // 20% discount for rest
    }

    total_bill = total_bill + (total_bill * 0.18); // 18% GST

    printf("Total bill is: %.2f\n", total_bill);
    return 0;
}