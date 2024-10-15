#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <time.h>



//    %d for integers
//    %f for floating-point numbers
//    %c for characters
//    %s for strings


//get user input into an 5 int array fill main array
void buildUserArray(int* arrayPointer){
    for(int i = 0;i<5;i++){
        printf("pick a number: ");
        scanf("%d",arrayPointer+i);
        printf("\n");
    }
}

void buildRandomArray(int* arrayPointer);
void printArray(int* arrayPointer,int size);
int calcWinnings(int* userArrayPointer,int* randomArrayPointer);

int main(){
    int userArray[5];
    int randomArray[5];
    //get user pick
    buildUserArray(userArray);

    //draw random array
    buildRandomArray(randomArray);
    //display draw and user picks
    printf("DRAW: \n"); 
    printArray(randomArray,5);
    printf("YOUR PICK: \n");
    printArray(userArray,5);
    //count and display cash prize
    int cashPrize = calcWinnings(userArray,randomArray);
    printf("you won %d$! \n",cashPrize);


    return 0;
}

void buildRandomArray(int* arrayPointer){
    srand(time(NULL));
    for(int i=0;i<5;i++){
        *(arrayPointer+i) = rand() %49;
    }

}

void printArray(int* arrayPointer,int size){
    printf("[");
    for(int i = 0;i<size;i++){
        printf("%d|",*(arrayPointer+i));
    }
    printf("]\n");
    

}

int calcWinnings(int* userArrayPointer,int* randomArrayPointer){
    int result;
    int correctCount = 0;

    for(int i = 0;i<5;i++){
        int compare = *(userArrayPointer+i);
        for(int i = 0;i<5;i++){
            if(compare == *(randomArrayPointer+i)){
                correctCount++;
            }
        }
    }

    switch (correctCount)
    {
    case 0:
        result = 0;
        break;
    case 1:
        result = 0;
        break;
    case 2:
        result = 4;
        break;
    case 3:
        result = 50;
        break;
    case 4:
        result = 1300;
        break;
    case 5:
        result = 25000;
        break;
    
    default:
        break;
    }

    return result;
}