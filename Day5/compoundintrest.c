#include<stdio.h>
#include<math.h>
int main(){
    float a,p,r,n,t;
    printf("Enter the amount of principle: ");
    scanf("%f",&p);
    printf("Enter the intrest rate: ");
    scanf("%f",&r);
    printf("Enter the time of intrest: ");
    scanf("%f",&t);
    printf("Enter the year if instrest of compound: ");
    scanf("%f",&n);
    float re;
    re=r/100;
    a=p*pow((1+re/n),n*t);
    printf("Amount  is %.2f ",a);
    float ci;
    ci=a-p;
    printf("compound intrest is %.2f ",ci);

}