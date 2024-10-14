#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer; 
    int guess;        
    int attempt = 0; 
    
    answer = 50;
   
    do {
        printf("Guess a number: ");
        scanf("%i", &guess);

        attempt++; 

        if (guess > answer) {
            printf("High!\n");
        } else if (guess < answer) {
            printf("Low!\n");
        } else {
            printf("Congratulation! Trials: %i\n", attempt);
        }
    } while (guess != answer); 
    
	return 0;
}