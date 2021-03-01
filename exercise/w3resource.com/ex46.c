#include <stdio.h>

int main()
{
    float i, total,s=1;

    for (i = 1; i <8; i+=2){
        total += (i/s);
        s *= 2;
    }
    printf("Value of series: %.2f",  total);

        return 0;
}
