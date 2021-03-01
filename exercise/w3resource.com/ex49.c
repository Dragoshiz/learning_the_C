#include <stdio.h>

int main(){
    int num[5], i, inp;
    printf("Input the first number of the array: ");
   
    scanf("%d", &inp);

    for (i = 0; i < 5; i++)
    {
        num[i] = inp;
        inp = 3*inp;
    }
        for(i=0 ; i < 5; i++)
        {
            printf("n[%d] = %d\n", i,num[i]);
        }
    return 0;
}
