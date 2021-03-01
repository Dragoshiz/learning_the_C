#include <stdio.h>

int main(){
    int i, n, x = 0, j = 1;
    printf("Input number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        while(x < 3){
            printf("%d ", j++);
            x++;
        }
        x = 0;
        printf("\n");

    }
    return 0;
}
