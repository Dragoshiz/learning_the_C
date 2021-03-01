#include <stdio.h>

int main(){
    int a, x = 0, y;
    printf("Input positive number less than 500: \n");
    scanf("%d", &a);

    y = a;
    if(y < 1){
        printf("Number out of range");
    }
    else{
        x += y % 10;
        y /= 10;
        x += y % 10;
        y /= 10;
        x += y % 10;
        y /= 10;
        x += y % 10;
    }printf("Sum of digits of %d is %d\n", a, x);

    return 0;
}
