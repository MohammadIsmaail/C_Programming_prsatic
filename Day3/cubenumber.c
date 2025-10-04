#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int sum = (a * a * a) + (b * b * b);
    printf("Sum of cube of both numbers = %d\n", sum);
}