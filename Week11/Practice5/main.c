#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
    FILE *fp; 

  
    fp = fopen("C:\\Users\\cyndb\\OneDrive\\Document\\sample.txt", "w");

   
    for (int i = 0; i < 3; i++) {
    	char word[50];
        printf("Input a word: ");
        scanf("%49s", word);
        fprintf(fp, "%s\n", word); 
    }

  
    fclose(fp);

    return 0;
}