#include <stdio.h>

int main(){
    int array[5], i, temp;
    
    printf("Input the 5 members of the array: ");

    for(i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }

    for(i = 0; i < 5; i++){
        if(i < (5/2)){
            temp = array[i];
            printf("%d", temp ); 
            array[i] = array[5-(i+1)];
            array[5-(i+1)] = temp;
            printf("%d", array[5-(i+1)]);
        }
    }

    for(i = 0; i<5; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}