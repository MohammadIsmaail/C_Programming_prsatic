#include<stdio.h>
int main(){
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);
    // (num1%2==0)?printf("Number is Even %d",num1):printf("Number is odd %d",num1);
    switch ((num1%2==0))
    {
    case 1:
        printf("Number is Even %d",num1);
        break;
    case 0:
        printf("Number is odd %d",num1);
        break;
    default:
        printf("Invalid input");
        break;
    }

}