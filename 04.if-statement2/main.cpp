#include <stdio.h>

int main() {

	int a = 0;
	int b = 5;
	int c = 99;

	if (a > b && a < c) {
		puts("a is greater than b and less than c");
	}
	else if (a > c) {
		puts("a is greater than c");
	}
	else {
		puts("a is less than c");
	}

	return 0;
}