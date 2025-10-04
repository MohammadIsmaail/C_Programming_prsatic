// 2. Input year month and date of current date
// And year, month , date of your dob and check dob is smaller than current date or not

#include<stdio.h>
int main(){
    int cyear, cmonth, cdate;
    int byear, bmonth, bdate;

    printf("Enter current date (yyyy mm dd): ");
    scanf("%d %d %d", &cyear, &cmonth, &cdate);

    printf("Enter your date of birth (yyyy mm dd): ");
    scanf("%d %d %d", &byear, &bmonth, &bdate);

    // Check if DOB is smaller than current date
    if (byear < cyear || (byear == cyear && bmonth < cmonth) || (byear == cyear && bmonth == cmonth && bdate < cdate)) {
        printf("Your date of birth is before the current date.\n");
    } else {
        printf("Your date of birth is not before the current date.\n");
    }

    return 0;
}