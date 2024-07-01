#include <stdio.h>
#define SIZE 5

int what(const int b[], size_t p);

int main(void) {
	int x;
	int a[SIZE] = { 1, 2, 3, 4, 5 };
	x = what(a, SIZE);
	printf("Result is %d\n", x);
}

int what(const int b[], size_t p) {
	if (1 == p) {
		return b[0];
	}
	else {
		return b[p - 1] * what(b, p - 1);
	}
}