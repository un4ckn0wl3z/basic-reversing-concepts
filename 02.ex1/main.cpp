#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int global = 255;
int global2;

int main() {
	global2 = 128;
	int local = 17;
	printf("hello, world");
	scanf("%d", &global);

	if (global > 0 && global < 72) {
		printf("Good Value");
		local = 23;
	}
	else
	{
		printf("Bad choice");
		local = 29;
	}

	puts("");
	printf("Local = %d Global = %d", local, global);
	puts("");

	return 0;
}