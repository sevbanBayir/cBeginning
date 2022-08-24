#include<stdio.h>
#include<stdlib.h>

int main(){
    int secretNumber = 3;
    int guess;
    int guessLimit= 3;
    int guessCounter=0;


    while (guess!= secretNumber && guessCounter < guessLimit){

        printf("Enter a number: ");
        scanf("%d", &guess);
        guessCounter++;
        
    }

    if (guess==secretNumber && guessCounter <= guessLimit){
        printf("You win! ");
    }

    else {
        printf("Out of guess");
    }
    
     return 0;
    
}

/*
Solution of the guy from FreeCodeCamp:

#include<stdio.h>
#include<stdlib.h>

int main(){
    int secretNumber = 3;
    int guess;
    int guessLimit= 3;
    int guessCounter=0;
    int outOfGuesses= 0;


    while (guess!= secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit) {

            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCounter++;
        }else {
            outOfGuesses = 1;
        }
    }

    if (outOfGuesses == 1){
        printf("Out of guess");
    }

    else {
        printf("You win! ");
    }
    
     return 0;
    
}

*/