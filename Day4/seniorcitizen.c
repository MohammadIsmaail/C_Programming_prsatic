#include<stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 60) {
        printf("The person is a senior citizen.\n");
    } else {
        printf("The person is not a senior citizen.\n");
    }

    return 0;
}