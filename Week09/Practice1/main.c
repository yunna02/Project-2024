#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int flag = 1;
	int y;
	
	while(flag != 0){
		y = 3;
		flag = 0;
	}
	y = 4; /*Since y is only valid within the while loop, an error occurs when accessing y = 4; afterward.*/
}