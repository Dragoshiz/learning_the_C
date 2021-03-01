#include <stdio.h>
#define AL 5
#define MAX 5
int main(){
    int i, x, smol, poz;
    float nums[AL];
    printf("Input the 5 members of the array: ");

    for (i = 0; i < AL; i++)
    {
        scanf("%f", &nums[i]);
    }
    for (i = 0; i < AL; i++)
    {
        if (nums[i] < MAX)
        {
            printf("A[%d] = %.1f\n", i, nums[i]);
        }
    }
    return 0;
}
