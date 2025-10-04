#include<stdio.h>
#include <string.h>
int main(){
    int pass=123;
    char username[]="Techpile";
    int pass1;

    printf("Enter Your Password: ");
    scanf("%d", &pass1);
    char user[50];
    
    printf("Enter Your name: ");
    scanf("%s", user);
    if(pass==pass1 && strcmp(user, username)==0){
        printf("Login successful!\n");
    } else {
        printf("Login failed!\n");
    }
}