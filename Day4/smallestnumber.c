#include<stdio.h>
int main(){
    int num1,num2;

    printf("Enter a first number: ");
    scanf("%d",&num1);
    printf("Enter a second number :");
    scanf("%d",&num2);
    if(num1>num2){
        printf("num2 is smaller number ");
    }
    else{
        printf("num1 is smaller number ");
    }
       
}