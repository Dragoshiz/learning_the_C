#include <stdio.h>

int main(){

    int i, numbers[5], pos = 0, neg = 0;

    printf("Input the first number: ");
    scanf("%d", &numbers[0]);

    printf("Input the second number: ");
    scanf("%d", &numbers[1]);

    printf("Input the third number: ");
    scanf("%d", &numbers[2]);

    printf("Input the fourth number: ");
    scanf("%d", &numbers[3]);

    printf("Input the fifth number: ");
    scanf("%d", &numbers[4]);

    for(i = 0; i < 5; i++){
        if(numbers[i] > 0){
            pos++;  
        }else{
            neg++;
        }
    }
    printf("Number of positive numbers: %d\n", pos);
    printf("Number of negative numbers: %d\n", neg);

    return 0;
}
