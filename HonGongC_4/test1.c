#include <stdio.h>

int main(void)
{
	// 1�� ����
	int res;

	res = sizeof(short) > sizeof(long) ? 1 : 0;

	res = res == 1 ? printf("short") : printf("long");

	return 0;
}