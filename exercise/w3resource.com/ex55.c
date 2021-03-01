#include <stdio.h>

int main(){
    int x, y;
    printf("Input value for x & y:");

    scanf("%d%d", &x, &y);
    printf("Befor swapping the value of x & y: %d, %d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping the value of x & y: %d, %d", x, y);
    return 0;
}
