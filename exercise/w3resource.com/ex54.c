#include <stdio.h>

int main(){
    int cm;
    printf("Input centimeters: ");
    scanf("%d",&cm);

    printf("Distance of 500.00 cms is = %.2f", (float)cm/2.54);

    return 0;
}
