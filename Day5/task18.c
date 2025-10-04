#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check validity
    if (a > 0 && b > 0 && c > 0 && (a + b + c == 180)) {
        printf("The angles form a valid triangle.\n");

        // Check type of triangle
        if (a < 90 && b < 90 && c < 90) {
            printf("It is an Acute triangle.\n");
        } 
        else if (a == 90 || b == 90 || c == 90) {
            printf("It is a Right triangle.\n");
        } 
        else {
            printf("It is an Obtuse triangle.\n");
        }
    } 
    else {
        printf("The angles do NOT form a valid triangle.\n");
    }

    return 0;
}
