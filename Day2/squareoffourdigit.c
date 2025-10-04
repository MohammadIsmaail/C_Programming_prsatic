#include <stdio.h>
int main()
{
    int data;
    printf("Enter a value of Four digit ");
    scanf("%d", &data);
    int res1 = data / 1000;
    int res2 = (data / 100) % 100;
    int res3 = res2 % 10;
    int res4 = data % 10;
    int res5 = data % 100;
    int res6 = res5 / 10;
    printf("Total Square number sum of four digit is %d ", (res6 * res6 * res6) + (res4 * res4 * res4) + (res3 * res3 * res3) + (res1 * res1 * res1));
}