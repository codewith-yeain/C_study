#include <stdio.h>


void print_ary(int* pa, int size);

int main(void)
{
	// 크기가 다른 배열을 출력하는 함수
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };

	print_ary(ary1, sizeof(ary1) / sizeof(ary1[0]));
	printf("\n");
	print_ary(ary2, sizeof(ary2) / sizeof(ary2[0]));

	return 0;
}

void print_ary(int* pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}