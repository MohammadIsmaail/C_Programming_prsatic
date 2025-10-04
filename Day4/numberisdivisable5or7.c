#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the first number ");
    scanf("%d",&num1);
    printf("Enter a second number: ");
    scanf("%d",&num2);
    if(num1%5==0 && num2%7==0){
        printf("Number is Divisable is 5 and 7 ");
    }
    else{
        printf("number is not divisable by 5 and 7 ");
    }
    
}