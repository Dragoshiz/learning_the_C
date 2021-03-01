#include<stdio.h>


int main(){
    int i, j, nums[5], max = 0, num_pos = 0;
    printf("Input 5 integers: ");

    for (i = 0; i < 5; i++){
        scanf("%d", &nums[i]);
    }

    for (j = 0; j < 5; j++){
        if (nums[j] > max){
            max = nums[j];
            num_pos = j;
        }
    }
    printf("Highest value: %d\nPosition: %d", max, num_pos);

    return 0;
}
