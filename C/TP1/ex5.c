#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void greet(){
    printf("welcome to the calculator app: type a number, an operand and another number you can type q to quit at any time\n");
}

float multiply(int first,int second);

float add(int first,int second);

float sub(int first,int second);

float divide(int first,int second);

float mod(int first,int second);

float processInput(char userinput[]){
    int firstDigit;
    char operand;
    int secondDigit;
    int result;

    if(userinput == "q"){
        break;
    }

    //store first number
    scanf("%d",firstDigit);

    printf("please input the operand: ");
    scanf(" %c",&operand);

    printf("please input the second digit: ");
    scanf("%d",secondDigit);

    switch(operand){
        case "*":
            result = multiply(firstDigit,secondDigit);
            break;

        case "+":
            result = add(firstDigit,secondDigit);
            break;

        case "-":
            result = sub(firstDigit,secondDigit);
            break;

        case "/":
            result = divide(firstDigit,secondDigit);
            break;

        case "%%":
            result = mod(firstDigit,secondDigit);
        
            break;

    }




    



    

    return result;
}

int main(){
    int result;
    char userinput[];
    greet();
    while(true){
        scanf("%s",&userinput);
        result = processInput(userinput);
        printf("your result: %d\n",result);
    }



    return 0;
}

float multiply(int first,int second){

    return first*second;
}

float add(int first,int second){
    return first+second;
}

float sub(int first,int second){
    return first-second;
}

float divide(int first,int second){
    return first/second;
}

float mod(int first,int second){
    return first % second;
}