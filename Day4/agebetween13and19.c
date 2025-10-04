#include<stdio.h>
int main(){
    int age;
    printf("Enter Your age: ");
    scanf("%d",&age);
    if(age>=13 && age<=19){
        printf("He is a teenager ");
    }
    else{
        printf("He is not teenager ");
    }
}