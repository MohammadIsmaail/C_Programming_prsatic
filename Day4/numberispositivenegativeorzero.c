#include<stdio.h>
int main(){
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);
    if(num1==0){
        printf("Number is zero ");
    }
    else if(num1>0){
        printf("number is positive ");
    }
    else if(num1<0){
        printf("Number is Negative ");
    }
}