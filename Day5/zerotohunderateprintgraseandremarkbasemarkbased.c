#include<stdio.h>

int main() {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered.\n");
        return 1;
    }

    printf("Marks: %d\n", marks);

    if (marks >= 90) {
        printf("Grade: A\nRemark: Excellent\n");
    } else if (marks >= 80) {
        printf("Grade: B\nRemark: Very Good\n");
    } else if (marks >= 70) {
        printf("Grade: C\nRemark: Good\n");
    } else if (marks >= 60) {
        printf("Grade: D\nRemark: Satisfactory\n");
    } else if (marks >= 50) {
        printf("Grade: E\nRemark: Needs Improvement\n");
    } else {
        printf("Grade: F\nRemark: Fail\n");
    }

    return 0;
}