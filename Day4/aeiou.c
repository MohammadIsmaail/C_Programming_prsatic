#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Character ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
        printf("character is a vowel");
    }
    else{
        printf("Character is not vowel ");
    }
}