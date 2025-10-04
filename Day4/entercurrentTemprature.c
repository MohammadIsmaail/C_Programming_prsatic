#include<stdio.h>

int main() {
    int temperature;

    printf("Enter the current temperature (in Celsius): ");
    scanf("%d", &temperature);

    if(temperature >0 && temperature<=10) {
        printf("It's a Cold day!\n");
    } else if(temperature >=11 && temperature <= 30) {
        printf("It's a normal day!\n");
    } else {
        printf("It's a hot day!\n");
    }

    return 0;
}