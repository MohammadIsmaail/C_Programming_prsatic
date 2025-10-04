#include <stdio.h>
int main() {
    int sub1, sub2, sub3, sub4, sub5, total = 0;
    float percentage;
    printf("Enter mark of Math number : ");
    scanf("%d", &sub1);
   
    printf("Enter mark of Science number : ");
    scanf("%d", &sub2);
    
    printf("Enter mark of English number : ");
    scanf("%d", &sub3);
    
    printf("Enter mark of History number : ");
    scanf("%d", &sub4);
    
    printf("Enter mark of Geography number : ");
    scanf("%d", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500.0) * 100;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %f\n", percentage);
}