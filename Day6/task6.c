// 6. WAP to calculate total late fee charge of library book
// Via input of issue date of book and return date of book .
// First 30 days is free :
// for next 20 days : 2rs/day
// For next 30 days : 4rs/days
// For rest all : 5rs/day
// #include<stdio.h>

// int main() {
//     int issue_day, return_day;
//     int total_days, late_days;
//     int fee = 0;

//     printf("Enter issue day (as day number): ");
//     scanf("%d", &issue_day);

//     printf("Enter return day (as day number): ");
//     scanf("%d", &return_day);

//     // Calculate total days the book was held
//     total_days = return_day - issue_day + 1; // include issue day

//     if(total_days <= 30) {
//         fee = 0; // first 30 days free
//     } else {
//         late_days = total_days - 30; // days after free period

//         if(late_days <= 20) {
//             fee = late_days * 2;
//         } else if(late_days <= 50) {
//             // first 20 days * 2rs + remaining days * 4rs
//             fee = 20 * 2 + (late_days - 20) * 4;
//         } else {
//             // first 20 days *2 + next 30 days *4 + remaining days *5
//             fee = 20 * 2 + 30 * 4 + (late_days - 50) * 5;
//         }
//     }

//     printf("Total late fee is: Rs %d\n", fee);

//     return 0;
// }



#include<stdio.h>

int main() {
    int iYear, iMonth, iDate;
    int rYear, rMonth, rDate;
    int total_days = 0;
    int fee = 0;

    printf("Enter issue date (yyyy mm dd): ");
    scanf("%d %d %d", &iYear, &iMonth, &iDate);

    printf("Enter return date (yyyy mm dd): ");
    scanf("%d %d %d", &rYear, &rMonth, &rDate);

    // Count days in years, months, and days separately
    int y, m, d;
    for(y = iYear; y <= rYear; y++) {
        int start_month = 1, end_month = 12;
        if(y == iYear) start_month = iMonth;
        if(y == rYear) end_month = rMonth;

        for(m = start_month; m <= end_month; m++) {
            int days_in_month;
            if(m == 2) {
                if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
                    days_in_month = 29;
                else
                    days_in_month = 28;
            } else if(m==4 || m==6 || m==9 || m==11)
                days_in_month = 30;
            else
                days_in_month = 31;

            if(y == iYear && m == iMonth)
                total_days += days_in_month - iDate + 1; // start from issue day
            else if(y == rYear && m == rMonth)
                total_days += rDate; // count only up to return day
            else
                total_days += days_in_month; // full month
        }
    }

    // Calculate fee
    int late_days = total_days - 30;
    if(late_days <= 0)
        fee = 0;
    else if(late_days <= 20)
        fee = late_days * 2;
    else if(late_days <= 50)
        fee = 20*2 + (late_days-20)*4;
    else
        fee = 20*2 + 30*4 + (late_days-50)*5;

    printf("Total late fee is: Rs %d\n", fee);

    return 0;
}

