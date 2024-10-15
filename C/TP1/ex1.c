#include <stdio.h>
#include <stdlib.h>

//    %d for integers
//    %f for floating-point numbers
//    %c for characters
//    %s for strings


int main(){
    int age;
    int statut;
    float prix = 0;
    
    printf("entrez age: ");
    scanf("%d",&age);
    printf("\n");
    printf("entrez statut [0 non etudiant ¦ 1 etudiant]: ");
    scanf("%d",&statut);
    printf("\n");
   
    if(age > 12 && age < 26){
        prix = 22;
    }

    if(age > 25 && age < 61){
        prix = 38;
    }

    if(age > 60){
        prix = 30;
    }

    if(statut == 1){
        prix = prix - (0.15*prix);
    }

    printf("votre prix : %f\n",prix);

    
    return EXIT_SUCCESS;
}