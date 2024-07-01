#include <stdio.h>

void main() {
	int num = 10;
	printf("%d\n", num);

	num = num + 1;
	printf("%d\n", num);

	// 후위형
	num++;
	printf("%d\n", num);

	// 전위형
	++num;
	printf("%d\n", num);
}
