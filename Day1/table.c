#include<stdio.h>
int main(){
    int a;
    printf("Enter a number to print a table ");
    scanf("%d",&a);
    for(int i =1;i<=10;i++){
        printf("\ntable is %d ",a*i);
    }
}