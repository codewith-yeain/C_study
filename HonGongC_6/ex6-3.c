#include <stdio.h>

int main(void)
{
	// do ~ while¹®
	int a = 1;

	do
	{
		a = a * 2;
	} while (a < 10);

	printf("a : %d\n", a);

	return 0;
}