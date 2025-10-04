#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the first number ");
    scanf("%d",&num1);
    printf("Enter a second number: ");
    scanf("%d",&num2);
    if(num1%2==0 && num2%3==0){
        printf("Number is Divisable is 2 and 3 ");
    }
    else{
        printf("number is not divisable by 2 and 3 ");
    }
    
}