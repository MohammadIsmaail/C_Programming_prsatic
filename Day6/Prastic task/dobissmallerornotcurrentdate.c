#include <stdio.h>
int main()
{
    int cdate, cmonth, cyear, ddate, dmonth, dyear;
    printf("Enter a current date: ");
    scanf("%d", &cdate);
    printf("Enter a current month: ");
    scanf("%d", &cmonth);
    printf("Enter a current year: ");
    scanf("%d", &cyear);
    printf("You entered a current date: %02d/%02d/%04d\n", cdate, cmonth, cyear);
    printf("Enter a dob date: ");
    scanf("%d", &ddate);
    printf("Enter a dob month: ");
    scanf("%d", &dmonth);
    printf("Enter a dob year: ");
    scanf("%d", &dyear);
    printf("You entered a dob date: %02d/%02d/%04d\n", ddate, dmonth, dyear);
    if ((cdate > 0 && cdate <=31 && cmonth>0 && cmonth<13 && cyear > 999 && cyear < 3000) &&
     (ddate > 0 && ddate <= 31 && dmonth > 0 && dmonth < 13 && dyear > 999 && dyear < 3000))
    {
        printf("You entered a valid date: %02d/%02d/%04d\n", cdate, cmonth, cyear);
        printf("You entered a valid date: %02d/%02d/%04d\n", ddate, dmonth, dyear);
        if(cyear>dyear || cmonth>dmonth || cdate>ddate)
        {
            printf("The dob is smaller than the current date.\n");
        }
        else
        {
            printf("The dob is not smaller than the current date.\n");
        }
    }
    else
    {
        printf("You entered an invalid date.\n");
    } 
    return 0; 
}