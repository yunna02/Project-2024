#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char str[30]="happy C programming";
	
	printf("Length of String \"%s\": %i", str, strlen(str));
	return 0;
}