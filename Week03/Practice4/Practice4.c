#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a;
	int b;
	float fa;
	float fb;
	
	printf("enter two integers: ");
	scanf("%d, %d", &a, &b);
	
	fa = a;
	fb = b;
	
	printf("%6f / %6f = %6f\n", fa, fb, fa / fb);
	
	return 0;
}