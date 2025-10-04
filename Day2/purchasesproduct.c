#include<stdio.h>
int main(){
    float purchase_product, per_unit_price;
    printf("Enter the total purchase amount: ");
    scanf("%f", &purchase_product);
    printf("Enter the price per unit: ");
    scanf("%f", &per_unit_price);

    float total_units = purchase_product * per_unit_price;
    printf("Total units purchased: %.2f\n", total_units);
   
    float discount=total_units*0.10;
    float sgst=total_units*0.11;
    float cgst=total_units*0.09;
    printf("%f %f %f\n", sgst, cgst, discount);

    float total=total_units - discount + sgst + cgst;
    printf("Total amount after discount: %.2f\n", total);
}