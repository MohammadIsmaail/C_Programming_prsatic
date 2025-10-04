#include<stdio.h>

int main() {
    float amount, gst_rate, gst_amount, total_amount;

    printf("Enter the shopping amount: ");
    scanf("%f", &amount);

    printf("Enter GST rate (in %%): ");
    scanf("%f", &gst_rate);

    gst_amount = (amount * gst_rate) / 100.0;
    total_amount = amount + gst_amount;

    printf("GST Amount: %.2f\n", gst_amount);
    printf("Total Amount (including GST): %.2f\n", total_amount);

    return 0;
}