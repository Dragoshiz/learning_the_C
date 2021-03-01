#include <stdio.h>

int main(){
    int pair1, pair2, i, total = 0;

    printf("Input a pair of numbers (for example 10,2):\n");

    printf("Input first number of the pair: ");
    scanf("%d",&pair1);

    printf("Input second number of the pair: ");
    scanf("%d", &pair2);

    if (pair1 < pair2){
        return 0;
    }

    printf("\nList of odd numbers: ");
    for (i = pair2; i <= pair1; i++){

        if(i % 2 != 0){

        printf("%d\n", i);
        total += i;
        }
    }
    printf("Sum = %d\n", total);



    return 0;
}
