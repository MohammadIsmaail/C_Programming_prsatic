#include<stdio.h>
int main(){
    int num1,org;
    printf("Enter a three digit  number: ");
    scanf("%d",&num1);

    int rem=num1/10;
    int rem1=rem%10;
    int num3=num1%10;
    int rem2=rem/10;
    org=num1;
    printf("Reverse number is %d%d%d",num3,rem1,rem2);
   int rev=num3*100+rem1*10+rem2;
    if(rev==num1){
        printf("\nnumber is palindromes %d",num1);
    }
    else{
        printf("\nnumber is not palindromes");
    }
}