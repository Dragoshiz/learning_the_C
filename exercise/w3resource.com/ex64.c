#include <stdio.h>

int main(){
    int i,num, min, max, positive=0;
    double avg;
    printf("Input a positive integer:\n");
    scanf("%d",&num);
    if (num <=  0){
        printf("No positive value.");
    }
    min = num;
    max = num;
    while (num > 0){
        positive ++;
        if(num < min){
            min = num;
        }
        if(num > max){
            max = num;
        }
        avg+= num;
        printf("Input Next positive integer: \n");
        scanf("%d", &num);
    }
    printf("Number of positive values entered is %d\n", positive);
    printf("Maximum value entered is %d\n", max);
    printf("Minimum value entered is %d\n", min);
    printf("Average value is %.2f\n", avg/positive);

    return 0;
}
