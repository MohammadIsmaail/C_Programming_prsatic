#include<stdio.h>
int main(){
    int amount;
    printf("Enter a total number of amount ");
    scanf("%d",&amount);
    int fiveth=amount/500;
    int rem=amount%500;

    int twohun=rem/200;
    rem=rem%200;

    int hund=rem/100;
    rem=rem%100;

    int fifty=rem/50;
    rem=rem%50;
    
    int twenty=rem/20;
    rem=rem%20;

    int ten=rem/10;
    rem=rem%10;

    int five=rem/5;
    rem=rem%5;

    int two=rem/2;
    rem=rem%2;

    int one=rem/1;
    rem=rem%1;
    printf(" five Hounsrate %d \n Two Hundrate %d \nHoundrate  %d \nFifty %d \nTwenty %d \nTen %d \nFive %d \nTwo %d \nOne %d",fiveth , twohun, hund,fifty,twenty,ten,five,two,one);

}