#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Character ");
    scanf("%c",&ch);
   
    if((ch>='a'&& ch<='z')||(ch>='A' && ch<='Z')){
        printf("This is alphabet ");
    }
    else{
        printf("invalid ");
    }
}


