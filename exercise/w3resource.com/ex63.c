#include <stdio.h>

int main(){
    int i,j, sum = 0, m;

    printf("Input a positive number less than 100: ");
    scanf("%d", &m);
    if (m < 1 || m >=100){
        printf("\nNumber out of range. ");
        return 0;
    }

    j = 1;
    for (i = 1      ; j <= m; i++){
        sum += j*j*j*j;
        j += i;
    }
    printf("Sum of the series is %d\n", sum);
    return 0;
}
