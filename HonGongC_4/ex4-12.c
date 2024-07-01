#include <stdio.h>

int main(void)
{
	// 조건 연산자(삼항 연산자)
	int a = 10, b = 20, res;

	// 방법 1: res = (a > b) ? a : b;
	
	// 방법 2
	(a > b) ? (res = a) : (res = b);

	printf("큰 값: %d", res);

	return 0;
}