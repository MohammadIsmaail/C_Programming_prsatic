#include<stdio.h>
int main(){
    int s;
    printf("Enter a total amount of second ");
    scanf("%d",&s);
    int hour =s/3600;
    int rem =s%3600;
    int min=rem/60;
    int sec=rem%60;
    printf(" Hours is = %d Minutes is = %d Second is = %d",hour,min,sec);
}
