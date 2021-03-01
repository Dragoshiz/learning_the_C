#include <stdio.h>

int main(){
    int try = 10, password;

    while(try != 0){
        printf("Please input password: ");
        scanf("%d", &password);

        if (password == 1234){
            printf("Correct password");
            try = 0;

        }else{
            printf("Incorrect password!");
            }
        printf("\n");
    }


    return 0;
}
