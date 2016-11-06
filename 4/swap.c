#include <stdio.h>

void swap(int * a, int * b)
{
	int tmp = * a;
	* a = * b;
	* b = tmp;
}

int main()
{
	int a = 15;
	int b = 25;

	printf("a: %i, b: %i\n", a, b);

	swap( & a, & b);

	printf("a: %i, b: %i\n", a, b);
}

