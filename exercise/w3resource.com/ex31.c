#include <stdio.h>

int main(){
    int num;
    printf("Input an integer: ");
    scanf("%d", &num);

    if(num > 0 && num % 2 == 0){
        printf("Positive Even");
    }
    else if(num > 0 && num % 2 != 0){
        printf("Positive Odd");
    }
    else if (num < 0 && num % 2 != 0){
        printf("Negative Odd");
    }
    else if (num < 0 && num % 2 == 0){
        printf("Negative Even");
    }
    return 0;
}
