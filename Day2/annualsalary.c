#include<stdio.h>
int main(){
    int monthsalary,annunalsalary,incomtax,gst,totaltax,discount,finaltax;
    printf("Enter the amount of the month salary ");
    scanf("%d",&monthsalary);

    printf("Monthly Salary is %d",monthsalary);
    annunalsalary=monthsalary*12;
    printf("\nAnnual Salary is %d", annunalsalary);
    incomtax = annunalsalary*0.10;
    printf("\nIncom tax is %d",incomtax);
    gst= incomtax*0.18;
    printf("\nGST is %d",gst);
    totaltax=incomtax+gst;
    printf("\nTotal tax is %d",totaltax);
    discount=totaltax*0.2;
    printf("\nDiscount is %d",discount);
    finaltax=totaltax-discount;
    printf("\nTotal Number of the Tax ",finaltax);

}