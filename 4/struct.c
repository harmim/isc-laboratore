#include <stdio.h>

typedef struct results {
	int add;
	int subtract;
	int multiply;
	float divide;
} Tresults;

Tresults compute(int a, int b)
{
	Tresults results;

	results.add = a + b;
	results.subtract = a - b;
	results.multiply = a * b;
	results.divide = b != 0 ? a / (float) b : 0.0;

	return results;
}

int main()
{
	int a = 15;
	int b = 25;

	Tresults results = compute(a, b);

	printf("Add: %i\n", results.add);
	printf("Substract: %i\n", results.subtract);
	printf("Multiply: %i\n", results.multiply);
	printf("Divide: %f\n", results.divide);

	return 0;
}

