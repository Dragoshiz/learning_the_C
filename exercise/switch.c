#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Enter grade: ");
    char grade;
    scanf("%c", &grade);
    switch(grade){
        case 'A':
            printf("You did great!");
            break;
        case 'B':
            printf("You did good");
            break;
        case 'C':
            printf("You did ok");
            break;
        case 'D':
            printf("You did sufficient");
            break;
        case 'F':
            printf("You failed.");
            break;
        default:
            printf("Invalid grade");
    }

}
