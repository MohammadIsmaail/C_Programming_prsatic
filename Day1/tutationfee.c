#include<stdio.h>
int main(){
    int tut_fees;
    printf("Enter your Tutation fees ");
    scanf("%d",&tut_fees);
    int exam_fees,library_fees=1000,extra_activity_fees,management_charge;
    exam_fees=tut_fees*0.30;
    extra_activity_fees=tut_fees*0.20;
    management_charge=tut_fees*0.03;
    int total_fees=tut_fees+exam_fees+library_fees+extra_activity_fees+management_charge;
    printf("Total Fees is %d",total_fees);
}