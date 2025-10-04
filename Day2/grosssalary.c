#include<stdio.h>
int main(){
    int bs;
    printf("Enter your basic salary ");
    scanf("%d",&bs);
    int pf=bs*5/100;
    int hra=bs*45/100;
    int da=bs*30/100;

    int grosssalary=bs+pf+hra+da;
    printf("Gross Salary is  %d ",grosssalary);
}