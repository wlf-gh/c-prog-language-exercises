/* Write a program to print the corresponding Celsius to Fahrenheit table. */

#include <stdio.h>

int main() {

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 100;
	step = 10;

	// Adding the heading here
	printf("Celsius Fahrenheit\n");

	celsius = lower;
	while(celsius <= upper) {
	
		fahr = ((9.0/5.0) * celsius) + 32.0;
		printf("%7.0f %10.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}
