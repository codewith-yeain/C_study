#include <stdio.h>

int main(void)
{
	// Chapter 06-2 Ȯ�ι��� 3��
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (j == i || j == 4-i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}