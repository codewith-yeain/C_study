#include <stdio.h>
#include <math.h>

int main(void) {
	printf("%10.2f\n", pow(2.5, 3));

	printf("%10.2f", pow(2.5, 3));
	printf("\n");

	printf("%10.2lf\n", pow(2.5, 3));

	printf("%10.2lf", pow(2.5, 3));
	printf("\n");

	return 0;
}