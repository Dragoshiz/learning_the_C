#include <stdio.h>

int main(void){
    int num1;
    int num2;
    printf("Input the first integer: ");
    scanf("%d", &num1);
    printf("Input the second integer: ");
    scanf("%d", &num2);

    printf("Sum of the above two integers = %d", num1 * num2);

    return 0;
}