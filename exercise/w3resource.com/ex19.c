#include <stdio.h>

int main(void){
    int p, q, r, s;

    printf("Input first integer: ");
    scanf("%d", &p);

    printf("Input second integer: ");
    scanf("%d", &q);

    printf("Input third integer: ");
    scanf("%d", &r);

    printf("Input fourth integer: ");
    scanf("%d", &s);

    if ((q > r) && (s > p) && (r + s) > (p + q) && r > 0 && s > 0 && p % 2 == 0){
        printf("Correct values");
    }
    else{
        printf("Wrong values");
    }
    return 0;
}
