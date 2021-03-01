
#include <stdio.h>

int main(){
    int i, j, sval, position;

    printf("\nInput the length of the array: ");
    scanf("%d", &j);

    int v[j];
    printf("Input the array elements:\n ");
    for(i = 0; i < j; i++){
        scanf("%d", &v[i]);
    }
    sval = v[0];
    position = 0;
    for(i = 0; i < j; i++){
        if(sval > v[i]){
            sval = v[i];
            position = i;
        }
    }

    printf("Smallest Value: %d\nPosition of the element: %d", sval, position);

        return 0;
}
