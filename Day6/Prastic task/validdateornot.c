#include <stdio.h>
int main()
{
    int date, month, year;
    printf("Enter a date: ");
    scanf("%d", &date);
    printf("Enter a month: ");
    scanf("%d", &month);
    printf("Enter a year: ");
    scanf("%d", &year);
    if (date > 0 && date < 31 && month > 0 && month < 13 && year > 999 && year < 3000)
    {
        printf("You entered a valid date: %02d/%02d/%04d\n", date, month, year);
    }
    else
    {
        printf("You entered an invalid date.\n");
    }
    return 0;
}