#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char restart = 'Y';
    do {
        srand(time(0));
        int answer = rand() % 100 + 1;

        int guess;
        do {
        printf("Enter your guess (1 to 100) :");
        scanf(" %d", &guess);

        if (guess > 100 || guess <1) {
            printf("Sorry your guess is invalid! Please try again.\n\n");
        }
        } while (guess > 100 || guess < 1);

        int tries = 1;
        while (guess != answer) {
            if (guess > answer) {
                printf("High! Try again\n\n");
            }
            if (guess < answer) {
                printf("Low! Try again\n\n");
            }

            printf("Enter your guess (1 to 100) :");
            scanf(" %d", &guess);

            tries += 1;
        }
        
        printf("Congrats!\n\n");
        printf("You guessed in %d attempts\n\n", tries);
        
        printf("Do you want to play again(Y/y/N/n) ?");
        scanf(" %c", &restart);
        printf("\n");
        }
    while (restart == 'Y' || restart == 'y');

    printf("Bye!\n\n");
}