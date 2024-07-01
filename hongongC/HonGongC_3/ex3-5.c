#include <stdio.h>

int main(void) {
	float ft = 1.234567890123456789;	// 유효 숫자가 많은 값으로 초기화
	double db = 1.234567890123456789;

	printf("float형 변수의 값: %.20f\n", ft);
	printf("double형 변수의 값: %.20lf\n", db);

	// 1. 정수형을 기본으로 사용하고 꼭 필요한 경우에만 실수형 사용.
	// 2. 실수형은 유효 숫자가 많은 double형을 기본으로 사용.
}