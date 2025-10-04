#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the first student number total: ");
    scanf("%d",&num1);

    printf("Enter the second student number of total: ");
    scanf("%d",&num2);

    if(num1>num2){
        printf("Second number student is second heigher ");
    }
    else{
        printf("First number student is second heigher ");
    }
}