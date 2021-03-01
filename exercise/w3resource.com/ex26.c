#include <stdio.h>

int main(){

    printf("Even numbers between 1 to 50 (inclusive):");

    int num = 2;

    while (num < 52){
        printf("%d ", num);
        num = num + 2;
    }


    return 0;
}
