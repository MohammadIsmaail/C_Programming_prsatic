// 3. WAP to input current date and your dob (year, month, date) and check how many days you lived.

#include<stdio.h>
int main() {
    int cyear, cmonth, cdate;
    int byear, bmonth, bdate;

    printf("Enter current date (yyyy mm dd): ");
    scanf("%d %d %d", &cyear, &cmonth, &cdate);

    printf("Enter your date of birth (yyyy mm dd): ");
    scanf("%d %d %d", &byear, &bmonth, &bdate);

    int total_days = 0;
    int days_in_month;

    // Count full years between birth year and current year
    for(int year = byear; year <= cyear; year++) {
        for(int month = 1; month <= 12; month++) {
            // Determine days in month using if-else
            if(month == 2) {
                // Leap year check
                if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                    days_in_month = 29;
                else
                    days_in_month = 28;
            } else if(month==4 || month==6 || month==9 || month==11)
                days_in_month = 30;
            else
                days_in_month = 31;

            // Count days
            if(year == byear && month == bmonth)
                total_days += days_in_month - bdate; // start from birth date
            else if(year == cyear && month == cmonth)
                total_days += cdate; // count only up to current date
            else if(year > byear && year < cyear)
                total_days += days_in_month; // full months of full years
            else if(year == byear && month > bmonth)
                total_days += days_in_month; // remaining months in birth year
            else if(year == cyear && month < cmonth)
                total_days += days_in_month; // months before current month
        }
    }

    printf("You have lived for %d days.\n", total_days);

    return 0;
}
