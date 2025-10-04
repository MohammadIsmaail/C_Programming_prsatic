// 1. Input current date(year, month, date) and check inputed year, month and date is valid or not
// I/P : input year of current date :2023
// Input month of current date : 11
// Input date of current date : 30
// O/p : yes this is a valid date / No this is not a valid date

#include<stdio.h>
int main(){
    int year, month, date;
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &date, &month, &year);
    
    

    int valid = 1;

    if(year <= 0 || month <= 0 || month > 12 || date <= 0) {
        valid = 0;
    } else {
       
        if(month == 2) { 
            int leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
            if(date > (leap ? 29 : 28)) valid = 0;
        } else if(month==4 || month==6 || month==9 || month==11) { 
            if(date > 30) valid = 0;
        } else { // 31-day months
            if(date > 31) valid = 0;
        }
    }

    if(valid){
        printf("This is Valid date\n");
    } else{
        printf("This is Invalid date\n");
    }

    return 0;
}
