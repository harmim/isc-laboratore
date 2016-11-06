#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	bool error = false;
	double result;
	long number1, number2;
	
	if (argc == 4) {
		number1 = strtol(argv[1], (char **) NULL, 10);
		number2 = strtol(argv[3], (char **) NULL, 10);
		if (strcmp(argv[2], "+") == 0) {
			result = (double) number1 + number2;
		} else if (strcmp(argv[2], "/") == 0) {
			if (number2 == 0) {
				error = true;
			} else {
				result = (double) number1 / number2;
			}
		} else {
			error = true;
		}


	} else {
		error = true;
	}

	if (error) {
		fprintf(stderr, "Error\n");
		return 1;
	}

	printf("Result: %f\n", result);

	return 0;
}

