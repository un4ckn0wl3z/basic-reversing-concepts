#include <stdio.h>

int __cdecl demo_cdecl(int a, int b, int c, int d) {
	return (a + b + c + d);
}

int __fastcall demo_fastcall(int a, int b, int c, int d) {
	return (a + b + c + d);
}

int __stdcall demo_stdcall(int a, int b, int c, int d) {
	return (a + b + c + d);
}


int main(void) {
	int a = 0;
	a = demo_cdecl(1, 2, 3, 4);

	int b = 0;
	b = demo_fastcall(1, 2, 3, 4);

	int c = 0;
	c = demo_stdcall(1, 2, 3, 4);

}