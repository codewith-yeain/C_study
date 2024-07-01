#include <stdio.h>

void main() {
	int num = 10;
	int* nPtr = &num;

	printf("num의 주소: %d\n", &num);
	printf("nPtr에 들어있는 값: %d\n", nPtr);

	printf("%d\n", *nPtr);

	*nPtr = 200; // 주소로 접근해서 값을 바꿈

	printf("%d\n", num);

}