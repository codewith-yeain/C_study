#include <stdio.h>

int main(void)
{
	// const를 사용하는 포인터
	int a = 10, b = 20;

	// 여기서 사용된 const의 의미: pa가 가리키는 변수 a는 pa를 "간접 참조"해 바꿀 수 없다는 것
	const int* pa = &a;

	printf("변수 a 값 : %d\n", *pa);

	pa = &b;
	printf("변수 b의 값 : %d\n", *pa);

	pa = &a;
	a = 20;		// a를 직접 참조. *pa = 20 불가능.
	printf("변수 a의 값 : %d\n", *pa);

	return 0;
}