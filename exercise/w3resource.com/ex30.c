#include <stdio.h>
#include <math.h>

int main(){
    int end, from = 0;
    printf("Range from 1 to: ");
    scanf("%d", &end);

    while (from <= end){
        from += 2;
        printf("%d ^ 2 = %.0f\n", from, pow(from,2));

    }

    return 0;
}
