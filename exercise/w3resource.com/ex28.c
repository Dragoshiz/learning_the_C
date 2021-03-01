#include <stdio.h>

int main(){
    int i, postv = 0;
    float nums[5], sum =0;

    printf("Input the first number: ");
    scanf("%f", &nums[0]);

    printf("Input the second number: ");
    scanf("%f", &nums[1]);

    printf("Input the third number: ");
    scanf("%f", &nums[2]);

    printf("Input the fourth number: ");
    scanf("%f", &nums[3]);

    printf("Input the fifth number: ");
    scanf("%f", &nums[4]);

    for(i = 0; i < 5; i++){
        if(nums[i] > 0){
            postv++;
            sum += nums[i];
        }
    }
    printf("Number of positive numbers: %d\n", postv);
    printf("Average value of the said positive numbers: %.2f", sum / postv );

        return 0;
}
