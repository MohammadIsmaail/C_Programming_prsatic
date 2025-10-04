#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter a first number : ");
    scanf("%d",&num1);
    printf("Enter a second number: ");
    scanf("%d",&num2);
    if(num1==num2){
        printf("Number is equal");
    }
    else{
        printf("Number is not equal ");
    }
}