#include <stdio.h>
#include <math.h>

int main(){
    double x, tval;
    printf("Input value of x: \n");
    scanf("%lf",&x);
    if (x != 0.0){
        tval = sin(1/x);
        printf("Value of sin(1/x) is: %0.4lf", tval);
    }
    else {
        printf("Value of x should not be zero.");
        }
    return 0;
}
