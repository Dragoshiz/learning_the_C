#include <stdio.h>

int main(void){
    int total;
    printf("Input the amount: ");
    scanf("%d", &total);

    printf("There are:\n");
    printf("%d notes of 100\n", total / 100);
    printf("%d notes of 50\n", total % 100 / 50);
    printf("%d notes of 20\n", total % 100 % 50 / 20);
    printf("%d notes of 10\n", total % 100 % 50 % 20 / 10);
    printf("%d notes of 5\n", total % 100 % 50% 20 % 10 / 5);
    printf("%d notes of 2\n", total % 100 % 50 % 20 %10 % 5 / 2);
    printf("%d notes of 1\n", total % 100 % 50 % 20 % 10 % 5 % 2 / 1);

    return 0;
}
