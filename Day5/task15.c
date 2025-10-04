#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

   
    int inFirstRange = (num >= 10 && num <= 20);
    int inSecondRange = (num >= 30 && num <= 40);

    if ((inFirstRange && !inSecondRange) || (!inFirstRange && inSecondRange)) {
        printf("The number %d lies in exactly one of the two ranges (10-20 or 30-40).\n", num);
    } else {
        printf("The number %d does NOT lie in exactly one of the two ranges.\n", num);
    }

}
