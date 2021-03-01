#include <stdio.h>

int main(){
    int p1, p2, i, total = 0;

    printf("Input a pair of numbers (for example 10,2 : 2, 10):\n");

    printf("Input first number of the pair: ");
    scanf("%d", &p1);

    printf("Input second number of the pair: ");
    scanf("%d", &p2);

    if (p1 < p2){
        printf("The pair is in ascending order.\n");
    }else if (p1 > p2){
        printf("The pair is in descending order.\n");
    }
    else
    {
        printf("The pair is equal.");
    }

    return 0;
}
