#include <stdio.h>

int main(void)
{
	// if�� ��ø
	int a = 20, b = 10;

	if (a > 10)
	{
		if (b >= 0)
		{
			b = 1;
		}
		else
		{
			b = -1;
		}
	}

	printf("a : %d, b : %d", a, b);
}