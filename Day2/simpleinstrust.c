#include<stdio.h>
int main(){
    int pri,inst,time;
    printf("Enter a principle instrust ");
    scanf("%d",&pri);
    printf("Enter a simple instrust ");
    scanf("%d",&inst);
    printf("Enter a time of the month ");
    scanf("%d",&time);
    float res=pri*inst*time/100;
    printf("Simple instrust of amount is %f ",res);

}