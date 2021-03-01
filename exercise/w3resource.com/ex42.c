#include <stdio.h>

int main(){
    int i, n, x = 0, j = 1;
    printf("Input number of lines: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%d  %d  %d\n", i, i*i, i*i*i);
    }
        return 0;
}
