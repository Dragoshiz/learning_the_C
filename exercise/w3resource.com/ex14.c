#include <stdio.h>

int main(void){
    int distance;
    float fuel_spent;


    printf("Input total distance in km: ");
    scanf("%d", &distance);
    printf("Input total fuel spent in liters: ");
    scanf(" %f", &fuel_spent);
    printf("Average consumption (km/lt): %.2f", distance/fuel_spent);

    return 0;
}
