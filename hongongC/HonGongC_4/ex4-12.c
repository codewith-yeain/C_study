#include <stdio.h>

int main(void)
{
	// ���� ������(���� ������)
	int a = 10, b = 20, res;

	// ��� 1: res = (a > b) ? a : b;
	
	// ��� 2
	(a > b) ? (res = a) : (res = b);

	printf("ū ��: %d", res);

	return 0;
}