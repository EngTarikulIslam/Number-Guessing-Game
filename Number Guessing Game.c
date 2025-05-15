#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int i, number, currentGuess, MAX_GUESS = 3;
   char play;
   char answer;
   time_t t;

   srand((unsigned) time(&t));
   number = rand() % 100 + 1;
   // printf("%d", number);
   printf("Did you play game of Guess!");
   printf("\nIgnore this game press any key.\nPlay this gme press y or Y!\n");
   
   scanf("%c", &play);
   if(play == 'y' || play == 'Y'){
      printf("Welcome to the game of Guess It!");
      for (i = 0; i < MAX_GUESS; i++) {
       printf("\nGuess Your Number: ");
       scanf("%i", &currentGuess);
        
        if (currentGuess > 100) {
           printf("Illegal guess. Your guess must be between 1 and 100.\n");
           printf("Try again.\n ");
         }
        else if (currentGuess > number) {
           printf("Guess Low Number\n");
         }
        else if (currentGuess < number) {
           printf("Guess High Number\n");
        }
        else {
           printf("****CONGRATULATIONS****\nYou Are The Winner\nYou Are The Guessing Boss!");
           return 0;
        }
      }
      printf("****Sorry****\n\nYou tries maximum times.\nCorrect Guess Number: %d\nYou Are a Losser :-)", number);
   }
   else{
      printf("Wish you try to next time?");  
      }
   
   return 0;
}