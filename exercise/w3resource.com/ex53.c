#include <stdio.h>

int main(){
    int p, ir, t;
    printf("Input principle, Rate of interest & time to find simple interest: ");

    scanf("%d%d%d", &p,&ir,&t);
    

    int si = (p * ir * t)/100;

    printf("Simple interest = %d", si);
    return 0;
}
