#include <stdio.h>
int main() {
    float showroomPrice, rto, insurance, other, onRoadPrice;

    printf("Enter Showroom Price of Car: ");
    scanf("%f", &showroomPrice);

    rto = 0.025 * showroomPrice;
    insurance = 1.20 * rto;
    other = 0.01 * showroomPrice;

    onRoadPrice = showroomPrice + rto + insurance + other;

    printf("RTO Charges = %.2f\n", rto);
    printf("Insurance = %.2f\n", insurance);
    printf("Other Charges = %.2f\n", other);
    printf("On-Road Price of Car = %.2f\n", onRoadPrice);
    
}