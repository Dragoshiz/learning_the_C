#include <stdio.h>

int main(){
    int i, p, q, x, l;

    printf("Input number of lines: ");
    scanf("%d", &p);

    printf("Number of characters: ");
    scanf("%d", &q);

    for(i = 1, l =1; i <=p; i++)
    {
        for (x = 1; x <= q; x++){
            printf("%d ", l);
            l++;

        }
        printf("\n");
    }

    return 0;
}
