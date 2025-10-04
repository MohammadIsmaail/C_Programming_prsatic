#include<stdio.h>
int main(){
    int num1,num2,num3;

    printf("Enter a first number: ");
    scanf("%d",&num1);
    printf("Enter a second number :");
    scanf("%d",&num2);
    printf("Enter a Third number :");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3){
        printf("num1 is grather ");
    }
    else if(num2>num1 && num2>num3){
        printf("num2 is grather ");
    }
    else{
        printf("num3 is grather ");
    }
    

    
    
}