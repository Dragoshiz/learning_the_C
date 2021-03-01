#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));

    int rNum = rand() % 10;
    int yourNum;
    int guessTime = 0 ;

    while(yourNum != rNum && guessTime != 3){
        printf("Guess the number: ");
        scanf("%d", &yourNum);
        guessTime ++;
        if (yourNum < rNum){
            printf("Higher! ");
            }else if (yourNum > rNum){
                printf("Lower! ");
                }if(guessTime == 3){
                    printf("GAME OVER");
                    }if (yourNum == rNum){
                        printf("YOU WIN!");
                        }
        }
    }



