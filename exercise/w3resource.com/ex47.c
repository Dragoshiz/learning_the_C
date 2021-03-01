#include <stdio.h>

int main()
{
    int num, i;
    printf("Input an integer: ");
    scanf("%d", &num);

    printf("All the divisor of %d are:\n", num);

    for(i = 1; i <= num; i++)
    {
        if(num % i == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}
