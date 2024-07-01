#include <stdio.h>

int main(void)
{
	// 1. if문의 기본 형식
	int a = 20;
	int b = 0;

	if (a > 10)
	{
		b = a;
	}

	printf("a : %d, b : %d\n", a, b);

	// 2. if ~ else문: 둘 중의 하나를 반드시 사용하는 경우
	int c = 10;
	if (c >= 0) {
		c = 1;
	}
	else
	{
		c = -1;
	}

	printf("c : %d\n", c);

	// 3. if ~ else if ~ else문 : 3개의 실행문
	// 주의: 조건식을 차례로 검사하므로 이전 조건의 결과가 반영됨 !!!
	int x = 0, y = 0;

	if (x > 0)
	{
		y = 1;
	}
	else if (x == 0)
	{
		y = 2;
	}
	else
	{
		y = 3;
	}

	printf("y : %d\n", y);


	return 0;
}