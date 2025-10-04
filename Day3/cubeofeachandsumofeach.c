#include <stdio.h>
int main() {
    int num, digit, sum = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    printf("Sum of cubes of digits of %d = %d\n", num, sum);
}