#include<stdio.h>
int main(){
    int sub1,sub2,sub3;
    printf("Enter the sub1 number: ");
    scanf("%d",&sub1);
    printf("Enter the sub2 number: ");
    scanf("%d",&sub2);
    printf("Enter the sub3 number: ");
    scanf("%d",&sub3);
    float per=(sub1+sub2+sub3)*100/300;
    if(per>=40){
        printf("Student is passed %f",per);
    }
    else{
        printf("Sutdent is fail ");
    }
}