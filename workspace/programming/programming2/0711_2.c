#include <stdio.h>

void main() {
	int num = 5;
	num = 3;

	// C언어에서는 무조건 이런 식으로 출력해야한다.
	printf("num이라는 변수에 저장된 값은 %d", num);
}