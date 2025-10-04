#include<stdio.h>
int main(){
    float temp;
    printf("Enter the number of  temprature ");
    scanf("%f",&temp);

    if(temp<10){
        printf("Temperature is below the freezing point so freeze ");
    }
    else{
        printf("Tempature is heigh ");
    }
}  