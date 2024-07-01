#include <stdio.h>

// 포인터와 간접 참조 연산자

int main(void)
{
	int a;
	int* pa;

	pa = &a;
	*pa = 10;

	printf("포인터로 a 값 출력 : %d\n", *pa);
	printf("변수명으로 a 값 출력 : %d\n", a);


	// 포인터 선언
	// 주소 위치에 있는 변수의 자료형 *포인터 이름;

	// 간접 참조 연산자(*) 혹은 포인터 연산자(*)
	// 포인터가 가리키는 변수를 사용할 때 이용
	return 0;
}