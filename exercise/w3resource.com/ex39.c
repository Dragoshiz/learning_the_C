#include <stdio.h>

int main(){
    int i, j, num1, num2, sum = 0;
    printf("Input the first integer: ");
    scanf("%d", &num1);
    printf("Input the second integer: ");
    scanf("%d", &num2);

    for(i = num1; i <= num2; i++){
        if (i % 17 != 0){
            sum += i;
        }
    }printf("Sum: %d\n", sum);

    return 0;
}
