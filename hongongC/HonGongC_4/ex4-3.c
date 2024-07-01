#include <stdio.h>

int main(void)
{
	// 증감연산자의 연산
	int a = 10, b = 10; // 두 개의 변수를 동시에 선언하고, 동시에 초기화할 수 있음

	++a;
	--b;

	printf("a : %d\n", a);
	printf("b : %d\n", b);

	return 0;
}