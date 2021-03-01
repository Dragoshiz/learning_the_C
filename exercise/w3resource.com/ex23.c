#include <stdio.h>

int main(void){

    float a, b, c;

    printf("Input the first number: ");
    scanf("%f", &a);

    printf("Input the first number: ");
    scanf("%f", &b);

    printf("Input the first number: ");
    scanf("%f", &c);

    if ((a + b) > c || (b + c) < a || (c + a) > b){
        printf("Perimeter = %.1f", a + b + c);
    }else{
        printf("Can't make a triangle");
        }
}
