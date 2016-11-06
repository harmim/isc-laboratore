#include <stdio.h>

int main()
{
	char string[] = "retezec";

	for (int i = 0; string[i] != '\0'; i++) {
		if (string[i] >= 'a' && string[i] <= 'z') {
			string[i] -= 32;
		}
	}

	printf("%s\n", string);


	return 0;
}

