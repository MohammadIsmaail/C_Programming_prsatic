#include <stdio.h>
int main()
{
    int num1;
    printf("Enter a three digit number ");
    scanf("%d", &num1);

    if (num1 > 0)
    {
        int rem = num1 / 10;
        int rem1 = rem % 10;
        int num3 = num1 % 10;
        int rem2 = rem / 10;
        printf("Reverse number is %d%d%d", num3, rem1, rem2);
    }
    else{
        printf("Invalid input. Please enter a three-digit positive number.");
    }
}