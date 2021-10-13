#include<stdio.h>

int leapYear(int year){
    if(year % 400 == 0){
        return 1;
    }

    if(year % 100 == 0){
        return 0;
    }
    
    if(year % 4 == 0){
        return 1;
    }

    return 0;
}

int main(){
    int year;
    printf("Enter a year\n");
    scanf("%d", &year);

    leapYear(year) ? printf("Leap Year") : printf("Not Leap Year");
    return 0;
}
