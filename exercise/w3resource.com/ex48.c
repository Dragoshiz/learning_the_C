#include <stdio.h>

int main(){
    int i, num[5], x;
    printf("Input the 5 members of the array: \n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &x);
        if (x > 0){
            num[i] = x;
        }else
        {
            num[i] = 100;
        }
    }
        printf("Array values are: \n");
        for (i = 0; i < 5; i++){
            printf("num[%d] = %d\n", i , num[i]);
        }
    return 0;
}
