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
    int rev1=num3*num3*num3+rem1*rem1*rem1+rem2*rem2*rem2;
    printf("%d",rev1);
    if(rev1==num1){
        printf("\namstrong number is  %d",rev1);
    }
    else{
        printf("\nit is not amstrong number ");
    }
}