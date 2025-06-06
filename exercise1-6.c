/* Verify that the expression 'getchar() != EOF' is 0 or 1. */

#include <stdio.h>

int main() {

	int my_bool;

	/* I'll feed the program a file, i.e. 'echo "abc" | text.txt; ./a.out < test.txt' and it will print out all ones and then a zero at the end */
	while (my_bool = (getchar() != EOF)) {
	
		printf("Result of 'getchar() != EOF': %d\n", my_bool);
	}

	printf("Result of 'getchar() != EOF': %d\n", my_bool);

	return 0;
}
