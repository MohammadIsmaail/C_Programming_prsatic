#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch=='M' || ch=='m'){
        printf("He is a Male %c ",ch);
    }
    else if(ch=='F' || ch=='f'){
        printf("He is a female ");
    }
    else{
        printf("Invalid input");
    }
}