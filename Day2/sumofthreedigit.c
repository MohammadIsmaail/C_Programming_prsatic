#include<stdio.h>
int main(){
    int data;
    printf("Enter a value of Three digit ");
    scanf("%d",&data);
    int res1=data/100; 
    int res2=(data/10)%10; 
    int res3=data%10; 
    printf("Sum  of the Digit is  %d ",res1+res2+res3);

}