#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b){
	int output;
	output = a + b;
	return output;
}

int square(int n){
	return (n * n);
}

int get_max(int x, int y){
	if (x > y){
		return x;
	}
	else{
		return y;
	}
}

int main(void){
	int i, k;
	
	printf("Enter the integers: ");
	scanf("%i %i", &i, &k);
	
	int sum_result = sumTwo(i, k);
	int square_result = square(i);
	int get_max_result = get_max(i, k);
	
	printf("Result - Sum: %i, Square: %i, Max: %i\n", sum_result, square_result, get_max_result);
	
	return 0;
	
}

