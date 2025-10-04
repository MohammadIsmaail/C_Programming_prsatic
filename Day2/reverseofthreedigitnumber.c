#include<stdio.h>
int main(){
    int data;
    printf("Enter a value of Three digit ");
    scanf("%d",&data);
    int res1=data/100; 
    int res2=(data/10)%10; 
    int res3=data%10; 
    

    int a=res3*100;
    int b=res2*10;
    int reu= a+b+res1;
    printf("Reverse is %d",reu);

}