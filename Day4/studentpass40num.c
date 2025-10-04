#include<stdio.h>
int main(){
    int num;
    printf("Enter your number percentage: ");
    scanf("%d",&num);
    if(num>=40){
        printf("Student is passed ");
    }
    else{
        printf("Student is Fail ");
    }
}