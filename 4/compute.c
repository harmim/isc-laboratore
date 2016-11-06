#include <stdio.h>

void compute(int a, int b, int * add, int * subtract, int * multiply, float * divide)
{
	* add = a + b;
	* subtract = a - b;
	* multiply = a * b;
	* divide = b != 0 ? a / (float) b : 0.0;
}

int main()
{
	int a = 15;
	int b = 25;

	int add, subtract, multiply;
	float divide;

	compute(a, b, & add, & subtract, & multiply, & divide);

	printf("Add: %i\n", add);
	printf("Substract: %i\n", subtract);
	printf("Multiply: %i\n", multiply);
	printf("Divide: %f\n", divide);
}

