#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of the a and b: ");
    scanf("%d%d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("Swap the value of a %d and b %d ",a,b);
}