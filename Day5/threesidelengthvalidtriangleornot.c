#include<stdio.h>

int main() {
    float a, b, c;

    printf("Enter three side lengths of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    
    if (a + b > c && a + c > b && b + c > a) {
        printf("The given sides form a valid triangle.\n");
    } else {
        printf("The given sides do NOT form a valid triangle.\n");
    }

    
}