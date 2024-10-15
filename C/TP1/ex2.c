#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <time.h>



//    %d for integers
//    %f for floating-point numbers
//    %c for characters
//    %s for strings

int main(){
    srand(time(NULL));
    int randint = rand() % 101;
    int attempts = 0;
    bool userwown = false;
    int guess;
    printf("guess the number\n");
    while(!userwown){
        scanf("%d",&guess);
        if(guess == randint){
            userwown = true;
        }

        if(guess < randint){
            printf("higher\n");
            attempts += 1;
        }

        if(guess > randint){
            printf("lower\n");
            attempts += 1;
        }
    }

    printf("congrats, you guessed the number in %d attempts\n",attempts);




    return 0;
}