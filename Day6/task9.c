#include<stdio.h>
int main() {
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter operation (+ - * /): ");
    scanf(" %c", &op);

    if(op == '+')
        result = num1 + num2;
    else if(op == '-')
        result = num1 - num2;
    else if(op == '*')
        result = num1 * num2;
    else if(op == '/')
        result = num2 != 0 ? num1 / num2 : 0; // divide by zero check
    else {
        printf("Invalid operation\n");
        return 0;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
