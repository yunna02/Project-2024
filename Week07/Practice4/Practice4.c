#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n){
	int res = 1;
	
	for(int i=1; i<=n; i++){
		res *= i;
	}
	
	return res;
}

int combination(int n, int r){
	return (factorial(n) / (factorial(r) * factorial(n-r)));
}

int get_integer(void){
	
	int input;
	
	printf("Enter an integer: ");
	scanf("%i", &input);
	
	return input;
}

int main(void){
	int n, r;
	
	n = get_integer();
	r = get_integer();
	
	printf("The result of C(%i, %i) is %i\n", n, r, combination(n, r));
	
	return 0;
}