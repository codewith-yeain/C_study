#include <stdio.h>

// 08-1 마무리 3번

int main(void)
{
	int A[3] = { 1, 2, 3 };
	int B[10];
	int i;

	for (i = 0; i < sizeof(B) / sizeof(B[0]); i++)
	{
		B[i] = A[i % 3];
	}

	for (i = 0; i < sizeof(B) / sizeof(B[0]); i++)
	{
		printf("%4d", B[i]);
	}
}