#include<stdio.h>
int main(){
    int total_num;
    printf("Enter the number of  total dayes  ");
    scanf("%d",&total_num);
    int year=total_num/365;

    total_num=total_num%365;
    printf("Total number of days is %d",total_num);
    printf("\nYear is %d",year);

    int month=total_num/30;
    printf("\nMonth is %d",month);
    
    int reme=total_num%30;
    int week = reme/7;
    printf("\nWeek is %d ",week);

    int day=total_num%7;
    printf("\nDay is %d",day);


}