#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sec, min;
	
	printf("Input the second: ");
	scanf("%i", &sec);
	
	min = sec / 60;
	sec = sec % 60;
	
	printf("The time is %i : %i\n", min, sec);
	return 0;
}