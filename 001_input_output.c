// this simple program is created to output the given input string
// for the keks, I will not be using the string header

#include <stdio.h>

#define MAX 1000

char input[MAX];

int inputf() {
	extern char input[];
	int i, c;

	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
		input[i] = c;

	if (c == '\n') {
		input[i] = c;
		i++;
	}

	input[i] = '\0';

	return(i);
}

int main() {
	extern char input[];
	int length;

	while ((length = inputf()) > 2) {
		printf("%s", input);
	}
}
