#include <stdio.h>

int main(void){
    int dayimp, day, month, year;

    printf("Input no. of days: ");
    scanf("%d", &dayimp);

    year = dayimp / 365;
    month = dayimp % 365 / 30;
    day = dayimp % 365 % 30;


    printf("%d Year(s)\n", year);
    printf("%d Month(s)\n", month);
    printf("%d Day(s)", day);

    return 0;
}
