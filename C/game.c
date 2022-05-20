

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number;
    srand(time(NULL));
    number = rand() % 100 + 1;
    printf("Guess a number between 1 and 10: ");
    scanf("%d", &guess);
    while (guess != number) {
        if (guess > number) {
            printf("Too high!\n");
        } else {
            printf("Too low!\n");
        }
        printf("Guess again: ");
        scanf("%d", &guess);
    }
    printf("You guessed it!\n");
    getchar();
    return 0;
}



 