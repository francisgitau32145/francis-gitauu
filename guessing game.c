/* guessing_game.c */
/*
Name;Francis gitau njuguna
REG;CT100/G/26126/25
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secret, guess;
    int attempts = 0;

    srand((unsigned) time(NULL));
    secret = rand() % 20 + 1; // 1..20 inclusive

    printf("Guess the number (1-20):\n");
    while (1) {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) return 1;
        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            printf("You guessed it in %d attempt%s.\n", attempts, attempts == 1 ? "" : "s");
            break;
        }
    }
    return 0;
}
