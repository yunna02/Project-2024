#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char c;
	
	printf("enter a character: ");
	scanf("%c", &c);
	
	printf("the next character of %c (%i) is %c (%i)\n", c, c, c+1, c+1);
	
	return 0;
}