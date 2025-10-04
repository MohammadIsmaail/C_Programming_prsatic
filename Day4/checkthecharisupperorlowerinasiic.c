#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Character ");
    scanf("%c",&ch);
    int a=ch;
    
    if(ch>='A' && ch<='Z'){
        printf("'%c' is an uppercase letter in ASCII and ASCII number is %d.\n", ch,a);
    }
    else if(ch>='a' && ch<='z'){
        printf("'%c' is an lowercase letter in ASCII and ASCII number is %d.\n", ch,a);
    }
    else{
        printf("The number is not a Albhabet");
    }
}




