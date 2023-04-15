// this simple program is created to output the reverse of the given input string

#include <stdio.h>

#define MAX 1000

char str[MAX];
char rev_str[MAX];
int length;

int inputf() {
	extern char str[];
	int i, c;

	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
		str[i] = c;

	if (c == '\n') {
		str[i] = c;
		i++;
	}

	str[i] = '\0';

	return(i);
}

int reverse() {
	extern char str[], rev_str[];
	extern int length;
	int i;

	for (i = 0; i <= length - 2; i++)
		rev_str[i] = str[length - 2 - i];

	rev_str[i] = '\n';
	rev_str[i + 1] = '\0';
}

int main() {
	extern char str[], rev_str[];
	extern int length;

	while ((length = inputf()) > 2) {
		reverse();

		printf("%s", rev_str);
	}
}
