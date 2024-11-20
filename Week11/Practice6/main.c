#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE*fp=NULL;
	char c;
	fp = fopen("C:\\Users\\cyndb\\OneDrive\\Document\\sample.txt", "r");
	if(fp==NULL){
		printf("Not read\n");
	}
	
	while((c = fgetc(fp)) != EOF) {
        putchar(c); 
    }
	
	fclose(fp);
}