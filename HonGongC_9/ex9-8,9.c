#include <stdio.h>

void swap(int x, int y);

int main(void)
{
	int a = 10, b = 20;

	swap(a, b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y; 
	y = temp;

	// swap 함수 안에서는 a, b의 복사본을 바꾸므로 main 함수의 두 변수 a, b의 원래 값은 변함이 없게됨.
}