#include <stdio.h>

int main(void){
    int i, nums[5], total = 0;

    printf("Input the first number: ");
    scanf("%d", &nums[0]);
    
    printf("Input the second number: ");
    scanf("%d", &nums[1]);
    
    printf("Input the thirdnumber: ");
    scanf("%d", &nums[2]);
    
    printf("Input the fourth number: ");
    scanf("%d", &nums[3]);

    printf("Input the fifth number: ");
    scanf("%d", &nums[4]);

    for (i = 0; i < 5; i++){
        if((nums[i]% 2) != 0)
        {
            total += nums[i];
        } 
    }
    printf("Sum of all odd numbers: %d", total);
    return 0;
}