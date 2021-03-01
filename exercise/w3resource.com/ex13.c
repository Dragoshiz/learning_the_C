#include <stdio.h>

int main(void){
    int num1, num2, num3;
    printf("Input the first integer: ");
    scanf("%d", &num1);
    printf("Input the second integer: ");
    scanf("%d", &num2);
    printf("Input the third integer: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("Maximum value of the three integers: %d", num1);
    }
    else if (num1 < num2 && num2 > num3){
        printf("Maximum value of the three integers: %d", num2);
    }
    else if (num3 > num1 && num3 > num2){
        printf("Maximum value of the three integers: % d ", num3);
    }
    else{
        printf("2 or 3 values are equal");
    }
}
