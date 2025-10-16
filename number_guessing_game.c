//A number guessing game
/*
Name:CATHERINE NDUNG'U
Reg no:PA106/G/28730/25
Description:A c program that implements a number guesing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
  srand(time(NULL)); 
  secretNumber = rand() % 20 + 1 ;
   printf("guess the number between 1 and 20!\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You've guessed the correct number.\n");
            printf("It took you %d attempts.\n", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}