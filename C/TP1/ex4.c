#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>





void drawSquare(int size);



int main(){
    int size;
    printf("input size: ");
    scanf("%d",&size);
    drawSquare(size);
    printf("\n");

    return 0;
}


void drawSquare(int size){
    int lineCounter = 0;
    size--;
    for(int i = 0;i<=size;i++){ //draw line
        for(int i = 0;i <=size;i++){// draw . or 0
            if(i == 0 || i == size){
                printf("0");
            }
            else if (i == lineCounter){
                printf("0");
            }
            else if(i == size-lineCounter){
                printf("0");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
        lineCounter++;
        
    } 

}