#include <stdio.h>
int main(void)
{
    int width;
    int height;
    printf("Enter width of rectangle: ");
    scanf("%d", &width);
    printf("Enter height of rectangle: ");
    scanf("%d", &height);
    printf("Perimeter of rectangle = %d\n", height * 2 + width * 2);
    printf("Area of the rectangle = %d", height * width);


    return 0;
}
