#include<stdio.h>
int main(){
    float V,r;
    int pie=3.14;
    printf("Enter a radius ");
    scanf("%f",&r);
    V=(4/3)*pie*r*r*r;
    printf("Area of Square is %.2f",V);
}