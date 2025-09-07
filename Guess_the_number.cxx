
//  My First Game In C language.. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate and print a random number between 1 and 100
    int randomnumber = (rand() % 100) + 1;
    //printf("Random number between 1 and 100: %d\n", randomNumber);
    int no_of_guesses = 0;
    int guessed;
    
    do{
        printf("Guess the number\t");
        scanf("%d", &guessed);
        if ( guessed > randomnumber){
            printf("Lower case please!\n");
        }
            else if ( guessed < randomnumber){
                printf("Higher case please!\n");
            }
            else{
                printf("Congrats!!!\n");
            }
            no_of_guesses++;
    }while ( guessed != randomnumber);
    
    printf("You guessed the number in %d guesses", no_of_guesses);
    
    
    

    return 0;
}
