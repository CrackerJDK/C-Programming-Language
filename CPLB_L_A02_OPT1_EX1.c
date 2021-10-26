#include<stdio.h>

int main() {

    unsigned long centuries, years, days, hours, minutes, seconds, milliseconds;
    printf("The convert program. \nType your centuries you want: ");
    
    scanf("%d",&centuries);

    years = 1000*centuries;
    days = 365*years;
    hours = 24*days;
    minutes = 60*hours;
    seconds = 60*minutes;
    milliseconds = 1000*seconds;
    
    printf("%d centuries = %d years = %d days = %d hours = %d minutes = %lld seconds = %lld milliseconds", centuries, years, days, hours, minutes, seconds, milliseconds);
    
    return 0;
}