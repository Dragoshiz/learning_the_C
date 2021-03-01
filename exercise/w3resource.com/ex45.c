#include <stdio.h>

int main(){
    float s,total=0;

    for(float i = 1; i <= 50; i++)
    {

        total += (1/i);
    }
    printf("Value of S = %.2f", total);


    return 0;
}
