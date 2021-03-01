    #include <stdio.h>

int main(){
    float x, y;

    printf("Input two numbers:\n");
    printf("x: ");
    scanf("%f",&x);
    printf("y: ");
    scanf("%f",&y);

    if (y != 0){
        printf("%.0f : %.0f = %.1f", x, y, x/y);
    }else{
        printf("Division not possible");
        }


    return 0;
}
