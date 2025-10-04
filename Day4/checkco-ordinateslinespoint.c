#include<stdio.h>

int main() {
    float x1, y1, x2, y2, x, y;
    printf("Enter coordinates of first point of the line x1 y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of second point of the line x2 y2: ");
    scanf("%f %f", &x2, &y2);
    printf("Enter coordinates of the point to check x y: ");
    scanf("%f %f", &x, &y);


    float area = (x1*(y2 - y) + x2*(y - y1) + x*(y1 - y2)) / 2.0;

    if (area == 0.0) {
        printf("The point %.2f, %.2f lies on the line.\n", x, y);
    } else {
        printf("The point %.2f, %.2f does NOT lie on the line.\n", x, y);
    }

    
}