#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);
void print_ary(double* pa, int size);

int main(void)
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);	// 배열 요소의 개수 계산

	input_ary(ary, size);

	printf("입력된 배열 : ");
	print_ary(ary, size);

	max = find_max(ary, size);
	printf("배열의 최대값 : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size)
{
	int i;

	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++)
	{
		scanf_s("%lf", pa + i);
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i];
	}

	return max;
}

void print_ary(double* pa, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%lf ", pa[i]);
	}
	printf("\n");
}
